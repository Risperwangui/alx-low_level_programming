#!/bin/bash
wget -P /tmp https://github.com/Risperwangui/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gig.so
export LD_PRELOAD=/tmp/gig.so
