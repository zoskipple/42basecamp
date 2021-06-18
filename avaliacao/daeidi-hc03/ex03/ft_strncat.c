char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	while (*str1 != '\0')
	{	
		str1++;
		i++;
	}
	while (*str2 != '\0' && j < nb)
	{	
		*str1 = *str2;
		str1++;
		str2++;
		i++;
		j++;
	}
	*str1 = '\0';
	return (dest);
}
