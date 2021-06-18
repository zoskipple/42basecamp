int	ft_atoi(char *str)
{
	int	sign;
	int	valid_n;
	int	count;

	sign = 1;
	valid_n = 0;
	count = 0;
	while (str[count] == ' ' || str[count] == '\f' || str[count] == '\n'
		|| str[count] == '\r' || str[count] == '\t' || str[count] == '\v')
		count++;
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		valid_n = valid_n * 10 + (str[count] - '0');
		count++;
	}
	return (valid_n * sign);
}
