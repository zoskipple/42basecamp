int	ft_str_is_alpha(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (str[a] != '\0')
	{
		if ((str[a] < 65 || str[a] > 90 ))
			if ((str[a] < 97 || str[a] > 122))
				b = 0;
		a++;
	}
	return (b);
}
