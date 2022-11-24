//
// Created by Altagracia Cierra on 11/24/22.
//

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Convert
{
private:
    int         _dot;
    int         _count;
    int         _fl;
    std::string _arg;
    Convert();
    int isAllNum(std::string& arg);

public:
    Convert(std::string& arg);
    ~Convert();
    Convert(const Convert & copy);
    Convert& operator=(const Convert & right);

    void converted();
};


#endif
