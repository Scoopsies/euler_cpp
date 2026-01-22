# euler_cpp

My solutions to [Project Euler](https://projecteuler.net/) while learning c++.

## Running Tests

### Prerequisites
- CMake 3.10 or higher
- C++17 compatible compiler
- On Mac: `brew install cmake` and `xcode-select --install`

### Build and Test

First time setup:
```bash
cmake -B build
cmake --build build
./build/test_runner
```

After making changes:
```bash
cmake --build build && ./build/test_runner
```

Clean build:
```bash
rm -rf build && cmake -B build && cmake --build build
```

