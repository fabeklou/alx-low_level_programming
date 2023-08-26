#!/bin/bash
wget -P .. https://github.com/fabeklou/alx-low_level_programming/blob/main/0x18-dynamic_libraries/iam_lucky.so
export LD_PRELOAD="$PWD/../iam_locky.so"
