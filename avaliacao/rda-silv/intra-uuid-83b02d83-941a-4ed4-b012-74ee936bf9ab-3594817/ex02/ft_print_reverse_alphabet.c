#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	count;
	int	alphabet;

	count = 26;
	alphabet = 122;
	while (count > 0)
	{
		write(1, &alphabet, 1);
		count--;
		alphabet--;
	}
}
