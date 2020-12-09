# TIC-80-wasm-demo
A demo program for TIC-80 wasm language

This is a simple C program to test TIC-80 wasm/wat support.

## how to use

Compile the code with the supplied build.sh:

`./build.sh testapi.c`

This generates a `testapi.c.wat` file.
Open TIC-80, type `new wasm` to create a Wasm cart and copy/paste yout `testapi.c.wat` code inside, then run.

## Requirements

The build require emcc (Emscripten) and wasm2wat (from Wabt, webassembly binary toolkit). They should be avaiable in most distributions.

