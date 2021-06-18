#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	count;

	if (size <= 0)
		return ;
	count = 0;
	size = size - 1;
	while (count < size)
	{
		a = tab[size];
		tab[size] = tab[count];
		tab[count] = a;
		count++;
		size--;
	}
}
