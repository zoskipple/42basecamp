#include <unistd.h>

void	ft_putchar(char x, char y, char z);

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	while (x <= '7')
	{
		y = '1';
		while (y <= '8')
		{
			z = '2';
			while (z <= '9')
			{
				if (x < y && y < z)
					ft_putchar(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

void	ft_putchar(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x != '7')
		write(1, ", ", 2);
}
