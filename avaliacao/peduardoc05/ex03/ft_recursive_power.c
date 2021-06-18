#include <stdio.h>

int	ft_recursive_power (int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
	int	nb;
	int	power;

	nb = 12;
	power = 3;
	printf("%d to the power of %d is %d",nb, power, ft_recursive_power(nb, power));
	return (0);
}