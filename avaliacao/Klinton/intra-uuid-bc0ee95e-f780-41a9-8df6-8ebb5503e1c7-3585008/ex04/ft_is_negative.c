#include <unistd.h>

void	ft_is_negative (int n)
{
	char	letter;

	if (n < 0)
	{
		letter = 'N';
	}
	else
	{
		letter = 'P';
	}
	write(1, &letter, 1);
}
