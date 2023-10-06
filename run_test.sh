#!/bin/bash

set -e

cd cmake
cmake ..
make -j8
cd test
./read_file_test
./cpu_load_test