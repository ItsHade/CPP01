#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Constructor called for " << _name << std::endl;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << "Destructor called for " << _name << std::endl; 
    return ;
}

void Zombie::announce(void) const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
