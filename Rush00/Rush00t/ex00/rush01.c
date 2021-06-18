void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	j; //horizontal
	int	i; //vertical

	i = 1;
	while (i <= x)
	{
		j = 1;
		while (j <= y)
		{
			if (j == 1) 
			{
				ft_putchar('H');
			}
			else if (j == x) 
				ft_putchar('!');
			else if (j == 2)
				ft_putchar('e');
			else if (j == 3 || j == 4 || j == 10) 
				ft_putchar('l');
			else if (j == 5 || j == 8) 
				ft_putchar('o');
			else if (j == 7) 
				ft_putchar('w');
			else if (j == 9) 
				ft_putchar('r');
			else if (j == 11) 
				ft_putchar('d');
			else if (j == 6)
				ft_putchar(' ');
			else if (j < 250 || i < 250)
			    rush(x ,y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
