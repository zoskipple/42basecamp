#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;
	int	sqrt;

	result = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (result <= 46340)
	{
		sqrt = result * result;
		if (sqrt == nb)
			return (result);
		result = result + 1;
	}
	return (0);
}

int main(void)
{	
	int	nb;

	nb = 81;
	printf("square root of %d is %d\n",nb, ft_sqrt(nb));
	return (0);
}
