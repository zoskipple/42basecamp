void	ft_swap(int *a, int *b)
{
	int	aux1;
	int	aux2;

	aux1 = *a;
	aux2 = *b;
	*b = aux1;
	*a = aux2;
}

#include <stdio.h>
int main (void){
    int a =15;
    int b = 16;
    int *p1;
    int *p2;
    p1 = &a;
    p2 = &b;
    printf("Antes: %d, %d\n",*p1, *p2);
    ft_swap(p1, p2);
    printf("Depois: %d, %d\n",*p1, *p2);
    return(0);
}