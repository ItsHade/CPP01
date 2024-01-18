#include "Zombie.hpp"

int	main(void)
{
	Zombie brian("Brian");
	brian.announce();
	randomChump("Joel");
	Zombie *tom = newZombie("Tom");
	tom->announce();
	delete tom;
	return (0);
}
