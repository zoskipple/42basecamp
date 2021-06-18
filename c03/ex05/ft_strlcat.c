unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && dest[i] != '\0')
		i++;
	if (dest[i] == '\0')
	{
		while (i < size - 1 && *src != '\0')
		{
			dest[i] = *src;
			src++;
			i++;
		}
		dest[i] = '\0';
	}
	while (*src != '\0')
	{
		src++;
		i++;
	}	
	return (i);
}
