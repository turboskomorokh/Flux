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

if(POLICY CMP0077)
    cmake_policy(SET CMP0077 NEW)
endif()
cmake_policy(SET CMP0167 NEW)

find_package(Boost REQUIRED COMPONENTS system log filesystem)
find_package(Doxygen)

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Package Boost not found")
endif()

message(STATUS "Found package Boost")

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    src/*.cpp src/*.cxx src/*.cc
)

file(GLOB_RECURSE HEADERS CONFIGURE_DEPENDS
    include/*.hpp include/*.h include/*.hxx
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -pthread)

target_link_libraries(${PROJECT_NAME} PRIVATE Boost::headers pthread)

if(Doxygen_FOUND)
    set(DOXYGEN_FILE_PATTERNS "*.cpp *.hpp *.h *.md *.cxx *.hxx *.cc")

    doxygen_add_docs(docs
        ${HEADERS} ${SOURCES} ${CMAKE_SOURCE_DIR}/README.md
        COMMENT "Generating API documentation with Doxygen"
    )

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
