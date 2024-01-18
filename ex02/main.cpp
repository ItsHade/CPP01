#include "Zombie.hpp"

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "Address of str = " << &str << std::endl;
}
