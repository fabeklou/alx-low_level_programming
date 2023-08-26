#!/bin/bash
wget -P .. https://raw.githubusercontent.com/devvspaces/alx-low_level_programming/master/0x18-dynamic_libraries/customrand.so
export LD_PRELOAD="$PWD/../customrand.so"