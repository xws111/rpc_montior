# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/work/cmake/_deps/gtest-src"
  "/work/cmake/_deps/gtest-build"
  "/work/cmake/_deps/gtest-subbuild/gtest-populate-prefix"
  "/work/cmake/_deps/gtest-subbuild/gtest-populate-prefix/tmp"
  "/work/cmake/_deps/gtest-subbuild/gtest-populate-prefix/src/gtest-populate-stamp"
  "/work/cmake/_deps/gtest-subbuild/gtest-populate-prefix/src"
  "/work/cmake/_deps/gtest-subbuild/gtest-populate-prefix/src/gtest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/work/cmake/_deps/gtest-subbuild/gtest-populate-prefix/src/gtest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/work/cmake/_deps/gtest-subbuild/gtest-populate-prefix/src/gtest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
