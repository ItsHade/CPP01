#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie chumpInstance(name);
    chumpInstance.announce();
}