#include <unistd.h>

void	ft_print_numbers(void)
{
	int	count;

	count = 48;
	while (count < 58)
	{
		write(1, &count, 1);
		count++;
	}
}
