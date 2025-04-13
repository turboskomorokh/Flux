cmake_minimum_required(VERSION 3.20)

project(flux
    VERSION 0.0.0000000000000000000001
    DESCRIPTION "A PixelWorlds Server"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Установка политики
if(POLICY CMP0077)
    cmake_policy(SET CMP0077 NEW)
endif()

cmake_policy(SET CMP0167 NEW)

# Find mayonaise
find_package(nlohmann_json REQUIRED)
find_package(Boost REQUIRED COMPONENTS system log filesystem)
find_package(Bsoncxx REQUIRED)
find_package(Doxygen)

# Sources
file(GLOB_RECURSE SOURCES
    "src/*.cpp"
    "src/*.cxx"
    "src/*.cc"
)

# Headers
file(GLOB_RECURSE HEADERS
    "include/*.hpp"
    "include/*.h"
    "include/*.hxx"
)

# Main executable
add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
)

# Headerss
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(Boost_FOUND)
message(STATUS "Found package Boost")
else()
    message(FATAL_ERROR "Package Boost not found")
endif()

if(nlohmann_json_FOUND)
    message(STATUS "Found package nlohmann_json")
else()
    message(FATAL_ERROR "Package nlohmann_json not found")
endif()

if(Bsoncxx_FOUND)
    message(STATUS "Found package Bsoncxx")
else()
    message(FATAL_ERROR "Package Bsoncxx not found")
endif()

# Doxygen config
if(Doxygen_FOUND)
    set(DOXYGEN_PROJECT_NAME "${PROJECT_NAME}")
    set(DOXYGEN_PROJECT_NUMBER "${PROJECT_VERSION}")
    set(DOXYGEN_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/docs")
    set(DOXYGEN_GENERATE_HTML YES)
    set(DOXYGEN_HTML_OUTPUT "html")
    set(DOXYGEN_DISABLE_INDEX NO)
    set(DOXYGEN_FULL_SIDEBAR NO)
    set(DOXYGEN_HTML_COLORSTYLE "DARK")
    set(DOXYGEN_RECURSIVE YES)
    set(DOXYGEN_EXTRACT_ALL YES)
    set(DOXYGEN_EXTRACT_PRIVATE YES)
    set(DOXYGEN_EXTRACT_STATIC YES)
    set(DOXYGEN_SOURCE_BROWSER YES)
    set(DOXYGEN_GENERATE_TREEVIEW YES)
    set(DOXYGEN_REFERENCED_BY_RELATION YES)
    set(DOXYGEN_REFERENCES_RELATION YES)
    set(DOXYGEN_USE_MDFILE_AS_MAINPAGE "${CMAKE_SOURCE_DIR}/README.md")
    set(DOXYGEN_FILE_PATTERNS "*.cpp" "*.hpp" "*.h" "*.md" "*.cxx" "*.hxx" "*.cc")
    set(DOXYGEN_ALWAYS_DETAILED_SEC YES)
    set(DOXYGEN_GENERATE_LATEX NO) # WHY YES
    set(DOXYGEN_GENERATE_XML NO) # WHY YES

    doxygen_add_docs(docs
        ${HEADERS}
        ${SOURCES}
        ${CMAKE_SOURCE_DIR}/README.md
        COMMENT "Generating API documentation with Doxygen"
    )

    # Doc check target
    add_custom_target(docs-check
        COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_BINARY_DIR}/Doxyfile
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        COMMENT "Checking Doxygen documentation for warnings"
        VERBATIM
    )
    add_dependencies(docs-check docs)
    message(STATUS "Found package Doxygen")
else()
    message(WARNING "Package Doxygen not found, skipping documentation generation")
endif()

# Compiler options
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)
target_compile_options(${PROJECT_NAME} PRIVATE
    -Wall
    -Wextra
    -Wpedantic
    -pthread
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    Boost::headers
    bsoncxx
    pthread
)

# Installation
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(DIRECTORY include/ DESTINATION include)
