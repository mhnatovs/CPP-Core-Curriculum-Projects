#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl h1;

    if (argc != 2)
    {
        std::cout << "Choose level and try again: DEBUG / INFO / WARING / ERROR\n";
        return (1);
    }
    h1.complain(argv[1]);
    return 0;
}