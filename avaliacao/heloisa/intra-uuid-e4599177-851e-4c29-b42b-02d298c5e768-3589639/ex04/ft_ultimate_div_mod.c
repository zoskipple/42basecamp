void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>
int main (void)
{
    int *a;
    int *b;
    int var1=10;
    int var2=2;
    a = &var1;
    b = &var2;
    printf("Antes: %d, %d\n",*a,*b);
    ft_ultimate_div_mod(a,b);
    printf("Depois: %d, %d\n",*a,*b);
}