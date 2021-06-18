int	ft_str_is_numeric(char *str)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (str[num1] != '\0')
	{
		if ((str[num1] < 48 || str[num1] > 57))
			num2 = 0;
		num1++;
	}
	return (num2);
}
