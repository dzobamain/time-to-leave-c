#!/bin/bash

OUT="Time to leave"
SRC=$(find . -name "*.c")

gcc $SRC -o "$OUT" -lncurses