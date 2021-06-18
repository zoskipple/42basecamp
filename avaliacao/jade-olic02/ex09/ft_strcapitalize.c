char	*ft_strcapitalize(char	*str)
{
	char	prev;
	int		a;

	prev = 0;
	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			if (!prev)
				str[a] -= 32;
			prev = 1;
		}
		else if (str[a] >= 65 && str[a] <= 90)
		{
			if (prev)
				str[a] += 32;
			prev = 1;
		}
		else
			prev = str[a] >= 48 && str[a] <= 57;
		a++;
	}
	return (str);
}
