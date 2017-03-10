add_executable(test main.cpp bar.cpp foo.cpp)
cmake -H. -B_build
cmake -build _build
./_build/test
