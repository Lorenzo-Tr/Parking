#!bin/bash

rm -rf build/*
cd build
cmake ../
# For windows user 
# cmake .. -G "MinGW Makefiles"
cd ../