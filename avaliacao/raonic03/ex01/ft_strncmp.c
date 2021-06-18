int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;

	if (n == 0) // s1 = [a][b][c][d][e]
	            // s2 = [a][b][c][g][e]
		return (0);
	i = 0;
	while (n > 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
