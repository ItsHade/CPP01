#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombieInstance = new Zombie(name);
    return (zombieInstance);
}