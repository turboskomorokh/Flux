# Flux

Inspired by zKevz  

I hate myself so much so I decided to make a server for dead MMO Sandbox and use C++ for that uneasy task.  
God bless my soul... And you can support me tho, see [Support](#support).

## Build steps

I don't know why should you use this instead zKevz's server, by the moment it seems you do really care not, so here are the steps:

### Installation shortcut

```shell
sudo apt install libboost-system-dev libboost-log-dev libboost-coroutine-dev libboost-stacktrace-dev libsqlite3-dev nlohmann-json3-dev
```

### Install libboost

```shell
sudo apt install libboost-all-dev
```

Instead if you care and don't want to have the full version of libboost on your disk

```shell
sudo apt install libboost-system-dev libboost-log-dev libboost-coroutine-dev libboost-stacktrace-dev 
```

### Install sqlite

```shell
sudo apt install libsqlite3-dev
```

### Install Nlohmann JSON

```shell
sudo apt install nlohmann-json3-dev
```

### Optional: Install doxygen

Would be useful if you planning a contribution to the project... Or if you wanna know ~~wtf is a kilometer~~ how fucked up the source code is.

```shell
sudo apt install doxygen
```

### Build the server

Make the build folder

```shell
mkdir build && cd build
```

Use cmake to put everything together

```shell
cmake ..
```

Build the server

```shell
make
```

Or if your Pentium have several cores:

```shell
make -j$(nproc)
```

Once you finished, you can install the server

```shell
echo "I haven't implemented that yet!"
```

## Support

<div style="text-align: center">
  <p>If you want to, you can support my eternal suffer!</p>
  <a href="https://boosty.to/tskmrkh">
  <img src="repo/images/boosty.svg" width="200" alt="Boosty" style="padding: 0; margin: 0;">
  </a>
</div>
