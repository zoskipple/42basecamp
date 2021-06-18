#include <unistd.h>

void	ft_putnbr_base_rec(int nbr, char *base, int size)
{
	
}

int	ft_ver_base(char *base)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' )
			return (0);
		i++;
	}
	while (*(base + k) != '\0')
	{
		j = k + 1;
		while (*(base + j) != '\0')
		{
			if(*(base + k) == *(base + j) )
			{
				return (0);
			}
			j++;
		}
		k++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (ft_ver_base(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		ft_putnbr_base_rec(nbr, base, s);
	}
}

/*
	while (*(base + i) != )

	while (*(base + i) != '\0')
	{
		j = i + 1;
		while (*(base + j) != '\0')
		{
			if(*(base + i) == *(base + j) )
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
*/
