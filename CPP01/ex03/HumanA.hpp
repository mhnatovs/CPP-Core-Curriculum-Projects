#ifndef HUMAN_A
# define HUMAN_A

# include "Weapon.hpp"
# include <string>

class HumanA {
    private:
        std::string name;
        Weapon &weapon;

    public:
        void attack();
        HumanA(std::string name, Weapon &weapon);
};

#endif