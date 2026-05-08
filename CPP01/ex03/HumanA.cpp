#include "HumanA.hpp"
#include <iostream>

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) :name(name), weapon(weapon) {} // ініціалізація через список
