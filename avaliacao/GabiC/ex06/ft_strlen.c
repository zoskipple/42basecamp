int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while ((str[i]) != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char 	*str = "42 is amazing bro";
	int		size;

	size = ft_strlen(str);
	printf("str=\"%s\"\nstrlen=%d\n", str, size);
	return (0);
}