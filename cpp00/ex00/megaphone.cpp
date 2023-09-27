#include <iostream>

void    toUpperCase(std::string str)
{
	int i = -1;

	while (str[++i])
		std::cout << (char)toupper(str[i]);
}

int main(int ac, char *av[])
{
	int i = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (++i < ac)
			toUpperCase(av[i]);

	std::cout << std::endl;

	return (0);
}
