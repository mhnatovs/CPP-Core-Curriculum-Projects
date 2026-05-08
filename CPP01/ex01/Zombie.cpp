#include "Zombie.hpp"

void Zombie::setName(const std::string &str)
{
	name = str;
}

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << this->name << " is destroyed" << std::endl;
}