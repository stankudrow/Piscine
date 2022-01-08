#include <unistd.h>

int	main(int ac, char **av)
{
	size_t	c1;
	size_t	c2;

	if (ac == 3)
	{
		c1 = 0;
		c2 = 0;
		while (av[2][c2] && av[1][c1])
		{
			if (av[2][c2] == av[1][c1])
				c1++;
			c2++;
		}
		if (!av[1][c1])
			write(1, av[1], c1);
	}
	write(1, "\n", 1);
	return (0);
}
