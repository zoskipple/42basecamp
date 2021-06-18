#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	testn;

	testn = 2;
	while (nb >= 2)
	{
		while (testn < nb)
		{
			if (nb % testn == 0)
				return (0);
			testn++;
		}
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (nb >= 2 && nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (2);
}

int	main(void)
{	
	int	nb;

	nb = 885298345;
	printf("The next prime number from %d is %d\n", nb, ft_find_next_prime(nb));
	return (0);
}

