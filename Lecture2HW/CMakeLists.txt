cmake_minimum_required(VERSION 3.10)
project(STR)

set(ABVGD
  "main.cpp"
  "FooString.h"
  "FooString.cpp"
)

add_executable(program ${ABVGD})