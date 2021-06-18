unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;

	a = 0;
	if (size > 0)
	{
		while (a < size - 1 && src[a] != '\0')
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	while (src[a] != '\0')
		a++;
	return (a);
}
