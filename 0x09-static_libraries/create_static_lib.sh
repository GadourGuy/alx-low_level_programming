#!/bin/bash
gcc -c $(find . -name "*.c")
ar rc liball.a *.o
