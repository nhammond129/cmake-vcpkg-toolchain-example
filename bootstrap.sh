#!/bin/bash

cwd=`pwd`

prepare() {
	cd $cwd
	git submodule update --init
	mkdir -p $cwd/build
}

build() {
	cd $cwd/build
	cmake ..
	cmake --build .
	cd $cwd
}

main() {
	prepare
	build

	echo -e "\n\nOutput:\n"
	find $cwd/build -executable -type f ! -path "$cwd/build/CMakeFiles/*"
}

main
