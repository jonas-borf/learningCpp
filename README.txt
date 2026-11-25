Gave up on this, can just compile as follows.
g++-15 -std=c++23 -fmodules -fsearch-include-path -c bits/std.cc
g++-15 -std=c++23 -fmodules main.cpp -o main

