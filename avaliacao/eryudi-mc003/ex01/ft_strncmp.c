int	ft_strncmp (char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (n == 0)
		return (0);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 1;
	while (*p1 == *p2 && *p1 && *p2 && i < n)
	{	
		i++;
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
