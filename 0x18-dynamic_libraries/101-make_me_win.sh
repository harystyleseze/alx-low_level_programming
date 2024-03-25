#!/bin/bash
wget -P .. https://raw.githubusercontent.com/harystyleseze/alx-low_level_programming/master/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD="$PWD/../putshack.so"
