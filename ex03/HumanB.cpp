#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "Constructor called for " << _name << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor called for " << _name << std::endl;
	return ;
}

void HumanB::attack(void) const
{
	// if (!(_weapon->getType().empty()))
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	// else
	// 	std::cout << _name << " attacks with their bare hands" << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
	return ;
}
