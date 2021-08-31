cmake_minimum_required(VERSION 3.19)
project(database)

set(CMAKE_CXX_STANDARD 17)

add_executable(database main.cpp date.cpp database.cpp condition_parser_test.cpp condition_parser.cpp node.cpp token.cpp test_runner.cpp)