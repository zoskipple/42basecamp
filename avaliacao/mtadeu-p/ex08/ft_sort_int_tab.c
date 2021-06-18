#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	step;

	step = 0;
	while (size > 0 && size * size)
	{
		while (step < size - 1)
		{
			if (tab[step] > tab[step + 1])
			{
				temp = tab[step];
				tab[step] = tab[step + 1];
				tab[step + 1] = temp;
			}
			step++;
		}
		size--;
		step = 0;
	}
}
