#!/bin/bash
wget -P /tmp https://github.com/Natnael-Gedlu/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gigamillions.so
export LD_PRELOAD=/tmp/gigamillions.so
