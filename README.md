### Prerequisites

- CMake >= 3.24
- C++23 compiler
- Make
- vcpkg: https://github.com/microsoft/vcpkg

### Setup

Make sure `VCPKG_ROOT` points to your vcpkg installation:

```bash
export VCPKG_ROOT="$HOME/vcpkg"
export PATH="$VCPKG_ROOT:$PATH"
```

### Configure and build:

```bash
cmake --preset debug
cmake --build --preset debug
```

### Run:

```bash
./build/debug/itch_mbo_feed_replay
```

### Release build:

```bash
cmake --preset release
cmake --build --preset release
./build/release/itch_mbo_feed_replay
```
