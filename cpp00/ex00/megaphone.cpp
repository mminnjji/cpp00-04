#include <iostream>
#include <cctype>
#include <string>

int main(int ac, char **av)
{
	int i = 1;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		while (av[i])
		{
			int j = 0;
			std::string str = av[i];
			while (str[j])
			{
				std::cout << static_cast<char>(toupper(str[j]));
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}