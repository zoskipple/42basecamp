void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 1;
	size--;
	while (i <= size)
	{
		if (tab[i] < tab[i - 1])
		{
			aux = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = aux;
		}
		ft_sort_int_tab(tab, size);
		i++;
	}
}

#include <stdio.h>
int main(void)
{
    int a[6] = {200,34,-1,50,0,-1};
    int *tab;
    tab = &a[0];
    int i;
    int size = 5;
    i = 0;
    printf("Antes: ");
    while (i <= size)
    {
        printf(" %d ", tab[i]);
        i++;
    }
    ft_sort_int_tab(tab, 6);
    i = 0;
    printf("\nDepois: ");
    while (i <= size)
    {
        printf(" %d ", tab[i]);
        i++;
    }
    printf("\n");
}
