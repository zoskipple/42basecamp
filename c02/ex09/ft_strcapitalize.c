char	*uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	uppercase (str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (cap == 1)
			{
				str[i] = str[i] - 32;
			}	
			cap = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			cap = 0;
		}
		else
			cap = 1;
		i++;
	}
	return (str);
}
