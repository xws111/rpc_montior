#!/bin/bash

set -e

cd cmake
cmake ..
make
cd test
./read_file_test