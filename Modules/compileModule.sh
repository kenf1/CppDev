#!/bin/bash

clang++ -std=c++20 hello.cppm --precompile -o Hello.pcm
clang++ -std=c++20 main.cpp -fprebuilt-module-path=. Hello.pcm -o Hello.out
./Hello.out