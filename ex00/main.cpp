//
// Created by Altagracia Cierra on 11/24/22.
//

#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: only one parameter allowed!" << std::endl;
        return (1);
    }

    std::string str(argv[1]);
    Convert a(str);
    a.converted();
    return (0);
}
