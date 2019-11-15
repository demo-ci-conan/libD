
#include "libA/libA.h"

#include <iostream>

void hello_libD(int indent, const std::string& msg) {
    std::cout << std::string(indent, ' ') << "libD: " << msg << std::endl;
}