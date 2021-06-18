void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>
int main (void){
    int a;
    a = 15;
    int *nbr;
    nbr = &a;
    printf("Antes: %d\n",*nbr);
    ft_ft(&a);
    printf("Depois: %d\n",*nbr);
    return(0);
}