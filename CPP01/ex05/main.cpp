#include "Harl.hpp"

int main()
{
    Harl h1;

    h1.complain("DEBUG");
    std::cout << std::endl;
    h1.complain("INFO");
    std::cout << std::endl;
    h1.complain("WARNING");
    std::cout << std::endl;
    h1.complain("ERROR");
    std::cout << std::endl;
    h1.complain("UNKNOWN");

    h1.complain("1");
    h1.complain("ERROR");

    return 0;
}