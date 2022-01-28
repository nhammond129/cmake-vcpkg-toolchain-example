#!/bin/bash

cwd=`pwd`
cd "$cwd/build"
cmake "$cwd" && cmake --build .

