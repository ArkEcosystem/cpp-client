#!/usr/bin/env bash

rm -dfr build
mkdir build
cd build

cmake -DUNIT_TEST=ON ..
cmake --build .

chmod +x ./build/test/ark_cpp_client_tests
./build/test/ark_cpp_client_tests
