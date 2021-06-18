int	ft_strcmp (char *s1, char *s2)
{	
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while ((*p1 == *p2) && (*p1) && (*p2))
	{
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
