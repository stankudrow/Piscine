#include <unistd.h>

static int	ft_isspace(int c)
{
	return ((c > 8 && c < 14) || c == 32);
}

int	main(int ac, char **av)
{
	char	*str;

	if (ac == 2)
	{
		str = av[1];
		while (ft_isspace(*str))
			str++;
		while (*str)
		{
			if (!ft_isspace(*str))
				write(1, str, 1);
			if (ft_isspace(*str) && !ft_isspace(*(str + 1)) && *(str + 1))
				write(1, "   ", 3);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
