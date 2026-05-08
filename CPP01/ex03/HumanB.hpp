#ifndef HUMAN_B
# define HUMAN_B

# include "Weapon.hpp"
# include <string>

class HumanB {

    private:
        std::string name;
        Weapon *weapon;

    public:
        void attack();
        void setWeapon(Weapon &weapon);
        HumanB(std::string name);
};

#endif