#include <iostream>

int main(int argc, char **argv)
{
	int	i = 1;
	int	j;

	(void)argc;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				std::cout<<char(argv[i][j] - 32);
			else
			 	std::cout<<argv[i][j];
			j++;
		}
		i++;
	}
	std::cout<<std::endl;
}