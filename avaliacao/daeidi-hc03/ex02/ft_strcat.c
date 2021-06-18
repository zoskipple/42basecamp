char	*ft_strcat(char *dest, char *src)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	while (*str1 != '\0')
	{	
		str1++;
	}
	while (*str2 != '\0')
	{	
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return (dest);
}
