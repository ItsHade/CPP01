#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

public :

	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
	void setType(std::string type);
	const std::string &getType(void) const;

private :

	std::string _type;
};

#endif
