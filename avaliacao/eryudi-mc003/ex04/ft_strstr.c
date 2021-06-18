#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int		j;
	char	*sub;

	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (*str != '\0')
	{
		if (to_find[j] != *str)
			j = 0;
		if (to_find[j] == *str)
		{
			if (j == 0)
				sub = str;
			j++;
		}
		if (to_find[j] == '\0')
			return (sub);
		str++;
	}
	return (0);
}
