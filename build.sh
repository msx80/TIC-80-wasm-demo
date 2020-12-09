#!/bin/bash

emcc --no-entry  -Os -s WASM=1 -s STANDALONE_WASM -s ERROR_ON_UNDEFINED_SYMBOLS=0 $1 -o tmp.wasm && wasm2wat tmp.wasm -o $1.wat


