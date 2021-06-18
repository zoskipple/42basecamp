void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	d; //divisor
	int	m; //modulo

	d = a / b; 
	m = a % b;
	*div = d;
	*mod = m;
}

#include <stdio.h>
int main (void)
{
    int *d1;
    int *d2;
    int v1 = 1;
    int v2 = 2;
    d1 = &v1;
    d2 = &v2;
    printf("Antes: %d, %d\n", *d1, *d2);
    ft_div_mod(10,3,d1,d2);
    printf("Depois: %d, %d\n", *d1, *d2);
    return(0);
}
