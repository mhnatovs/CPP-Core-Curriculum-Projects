#include "Zombie.hpp"

int main()
{
    int N = 11;
    std::string name = "ZombieA";
    Zombie *arr = zombieHorde(N, name);
    std::cout << N << " zombies called " << name << " are created:\n";
    for (int i = 0; i < N; i++)
    {
        std::cout << i << " ";
        arr[i].announce();
    }
    delete[] arr;
    return 0;
}
