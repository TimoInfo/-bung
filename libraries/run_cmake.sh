#!/bin/bash

cmake -G "Unix Makefiles" -S . -B build -D CMAKE_C_COMPILER=clang-16 -D CMAKE_CXX_COMPILER=clang++ 