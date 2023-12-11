#!/bin/bash
gcc -c -fPIC $(find . -name "*.c")
gcc -shared *.o -o liball.so
