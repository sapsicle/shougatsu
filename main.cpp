#include <iostream>
#include <string>
#include <vector>
#include <cassert>

#include "days.hpp"
#include "flags.hpp"


class flags;




int main(int argc, char* argv[])
{
    flags flags;

    if (std::string(argv[1]) == "-c") {flags.C = true;}

    std::cout << "flag: ";

    if (flags.C == true) {std::cout << "C" << std::endl;}

    std::cout << "command parsed, args: " << argv[2] << std::endl;

    return 0;
}