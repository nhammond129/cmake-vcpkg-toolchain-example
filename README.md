This is just a toy example making use of vcpkg as a toolchain for cmake.

`bootstrap.sh` provides what should be an automatic setup and build of the project.
For Windows, you can follow its general flow, also outlined here:

* `git submodule update --init`
* make `./build` directory
* `cd` into `./build`
* `cmake ..`
* `cmake --build .`

And your executable will be somewhere in `./build`.
On *nix I find it ends up at `./build/test` and on Windows my setup defaulted to `./build/debug/test.exe`
