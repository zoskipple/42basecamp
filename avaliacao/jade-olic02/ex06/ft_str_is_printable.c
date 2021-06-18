int	ft_str_is_printable(char	*str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (str[a] != '\0')
	{
		if (str[a] < 32 || str[a] == 127)
			b = 0;
		a++;
	}
	return (b);
}
