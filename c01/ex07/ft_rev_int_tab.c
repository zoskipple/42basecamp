void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	index;

	index = 0;
	size--;
	while (index <= size)
	{
		swap = tab[index];
		tab[index] = tab[size];
		tab[size] = swap;
		index++;
		size--;
	}
}
