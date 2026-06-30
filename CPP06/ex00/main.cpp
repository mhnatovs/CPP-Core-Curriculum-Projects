#include "ScalarConverter.hpp"
#include <iomanip> 
#include <iostream>
# include <exception>
# include <limits>
# include <sstream>
# include <string>
int main(int ac, char**av)
{
    if (ac != 2)
    {
        std::cerr << "Input correct value\n";
        return (1);
    }
    try {
        ScalarConverter::convert(av[1]);
    }
    catch(std::exception &e){
        std::cerr << "Convertion failed: " << e.what() << std::endl;
        return (1);
    }
    return (0);
}
