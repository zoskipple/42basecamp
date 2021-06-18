#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
		while (power-- > 0)
			result = result * nb;
	return (result);
}

int main(void)
{
	int	nb;
	int	power;

	nb = 12;
	power = 3;
	printf("%d to the power of %d is %d",nb, power, ft_iterative_power(nb, power));
	return (0);
}
