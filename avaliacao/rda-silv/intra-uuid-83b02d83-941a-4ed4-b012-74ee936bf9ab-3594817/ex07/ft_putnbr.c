#include <unistd.h>

void	nbVerification(int nb);

void	ft_putnbr(int nb)
{
	char	vector[10];
	int		count;
	int		j;

	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	nbVerification(nb);
	count = 0;
	while (nb > 0)
	{
		vector[count] = (nb % 10) + 48;
		nb = nb / 10;
		count++;
	}
	j = count - 1;
	while (j >= 0)
	{
		write (1, &vector[j], 1);
		j--;
	}
}

void	nbVerification(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
	}
}
