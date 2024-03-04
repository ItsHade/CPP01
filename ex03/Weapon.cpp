#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Constructor called for weapon with no type" << std::endl;
	return ;
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Constructor called for weapon of type " << _type << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor called for weapon of type" << _type << std::endl;
	return ;
}

void Weapon::setType(std::string type)
{
	_type = type;
	return ;
}

const std::string  &Weapon::getType(void) const
{
	return (_type);
}
