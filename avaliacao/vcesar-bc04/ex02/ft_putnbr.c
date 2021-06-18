#include <unistd.h>

void	ft_putnbr(int x)
{
	char		c;

	if (x == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (x < 0)
		write(1, "-", 1);
	if (x < 0)
		x *= -1;
	if (x <= 9)
	{
		c = x + '0';
		write(1, &c, 1);
	}
	if (x >= 10)
	{
		ft_putnbr(x / 10);
		c = x % 10 + '0';
		write(1, &c, 1);
	}
}
