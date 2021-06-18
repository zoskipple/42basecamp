#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (result);
	while (nb >= 2)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}

/*
int main(void)
{
	int	nb;

	nb = 9;
	ft_iterative_factorial(nb);
	printf("factorial of %d is %d",nb,ft_iterative_factorial(nb));
	return (0);
}
/*