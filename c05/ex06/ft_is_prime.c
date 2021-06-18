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

/*
int main(void)
{	
	int	nb;

	nb = 841;
	if (ft_is_prime(nb) == 0)
		printf("%d is NOT a prime number\n", nb);
	if (ft_is_prime(nb) == 1)
		printf("%d IS a prime number\n", nb);
	return (0);
}
*/