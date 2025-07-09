cmake_minimum_required(VERSION 3.20)

project(sample-cmake-lib)

add_library(sample-cmake-lib STATIC "src/ok.cc")
target_include_directories(sample-cmake-lib PUBLIC "include")