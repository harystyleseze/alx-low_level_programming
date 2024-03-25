#!/bin/bash
find . -name "*.c" ! -name "main.c" | xargs gcc -c -fpic && gcc *.o -shared -o liball.so
