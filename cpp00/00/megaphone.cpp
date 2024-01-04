#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int i = 1;

	if (ac < 2)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
		return (0);
	}
	else
	{
		while (av[i])
		{
			int j = 0;
			while (av[i][j])
			{
				av[i][j] = toupper(*(av[i] + j));
				std::cout << av[i][j];
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}