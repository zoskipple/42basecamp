char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{	
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j]; //estante e bloquinhos (a + b + c) + (c + d + e) 
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
