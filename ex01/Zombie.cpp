#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Constructor called !" << std::endl;
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

void Zombie::setName(std::string name)
{
    _name = name;
    return ;
}
