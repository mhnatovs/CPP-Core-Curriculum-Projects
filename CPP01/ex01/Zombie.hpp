#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie {

    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void	setName(const std::string &str);
		void	announce(void);

};

Zombie *zombieHorde( int N, std::string name );

#endif