#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[0] != '\0' && str[count] != '\0')
	{
		count++;
	}
	return (count);
}
