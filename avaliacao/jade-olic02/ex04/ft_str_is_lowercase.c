int	ft_str_is_lowercase(char	*str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (str[a] != '\0')
	{
		if (str[a] < 97 || str[a] > 122)
			b = 0;
		a++;
	}
	return (b);
}
