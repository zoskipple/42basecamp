#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b);

int    main(void)
{
    int    a;
    int    b;

    a = 60;
    b = 10;
    ft_swap(&a, &b);
    printf ("%d", a);
    printf ("\n");
    printf ("%d", b);
    printf ("\n");
    return (0);
}