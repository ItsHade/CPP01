#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "Constructor called for " << _name << " with " << _weapon.getType() << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor called for " << _name << std::endl;
	return ;
}

void HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
	return ;
}
