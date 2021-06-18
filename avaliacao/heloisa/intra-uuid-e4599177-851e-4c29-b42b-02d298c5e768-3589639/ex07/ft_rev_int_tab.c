void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	size--;
	while (i < size)
	{
		aux = tab[i];
		tab[i] = tab[size];
		tab[size] = aux;
		i++;
		size--;
	}
}

#include <stdio.h>
int main(void){
    int a[5] = {1,2,3,4,5};
    int *tab;
    tab = &a[0];
    int i;
    int size = 4;
    i = 0;
    printf("Antes: ");
    while (i <= size)
    {
        printf(" %d ", tab[i]);
        i++;
    }
    ft_rev_int_tab(tab, 5);
    i = 0;
    printf("\nDepois: ");
    while (i <= size)
    {
        printf(" %d ", tab[i]);
        i++;
    }
    printf("\n");
}
