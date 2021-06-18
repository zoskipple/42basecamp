#include <unistd.h>

void	write_result(char integer, char tenth, char hundredth)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &hundredth, 1);
	write(1, &tenth, 1);
	write(1, &integer, 1);
	if (hundredth == '7' && tenth == '8' && integer == '9')
		return ;
	else
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	char	integer;
	char	tenth;
	char	hundredth;

	integer = '0';
	tenth = '0';
	hundredth = '0';
	while (hundredth <= '9')
	{
		tenth = hundredth + 1;
		while (tenth <= '9')
		{
			integer = tenth + 1;
			while (integer <= '9')
			{
				write_result(integer, tenth, hundredth);
				integer++;
			}
			tenth++;
		}
		hundredth++;
	}
}
