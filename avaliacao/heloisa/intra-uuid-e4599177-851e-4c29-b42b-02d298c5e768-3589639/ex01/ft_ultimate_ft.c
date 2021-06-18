void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>
int main (void)
{
    int a = 15;
    int *p0;
    p0 = &a;
    int **p1;
    p1 = &p0;
    int ***p2;
    p2 = &p1;
    int ****p3;
    p3 = &p2;
    int *****p4;
    p4 = &p3;
    int ******p5;
    p5 = &p4;
    int *******p6;
    p6 = &p5;
    int ********p7;
    p7 = &p6;
    int *********p8;
    p8 = &p7;
    printf("Antes: %d\n",*********p8);
    ft_ultimate_ft(p8);
    printf("Depois: %d\n",*********p8);
    return(0);
}