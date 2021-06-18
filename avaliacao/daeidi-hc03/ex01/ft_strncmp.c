int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*str1 < *str2)
			return (*str1 - *str2);
		else if (*str1 > *str2)
			return (*str1 - *str2);
		else
		{
			i++;
			str1++;
			str2++;
		}
		if ((*str1 == '\0') && (*str2 == '\0'))
			return (0);
	}
	return (0);
}
