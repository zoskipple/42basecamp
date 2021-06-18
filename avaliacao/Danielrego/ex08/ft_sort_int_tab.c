#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;

	i = 0;
	j = i + 1;
	while (i < size)
	{
		if (&tab[i] < &tab[j])
		{
			ft_swap(&tab[i], &tab[j]);
			i = 0;
		}
		i++;
	}
}

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int counter;

	srand(1);
	counter = 0;
	tab = calloc(10, sizeof(int));
	while (counter < 10)
	{
		tab[counter] = rand() % 100;
		counter++;
	}
	counter = -1;
	while (9 > counter++)
		printf("%d ", tab[counter]);
	ft_sort_int_tab(tab, 10);
	printf("%c", '\n');
	counter = -1;
	while (9 > counter++)
		printf("%d ", tab[counter]);
	printf("%c", '\n');
	return (0);
}
