//
// Created by Altagracia Cierra on 11/24/22.
//

#include <iostream>
#include "Convert.hpp"

int main(void)
{
	std::string str("0");
	std::cout << "Convert a(\"" << str << "\");" << std::endl;
	Convert a(str);
	a.converted();

	std::cout << std::endl << "Convert b(a);" << std::endl;
	Convert b(a);
	b.converted();
}
