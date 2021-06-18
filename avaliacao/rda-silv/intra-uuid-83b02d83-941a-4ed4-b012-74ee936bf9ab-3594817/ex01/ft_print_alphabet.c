#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;
	int		count;

	count = 1;
	alphabet = 'a';
	while (count <= 26)
	{
		write (1, &alphabet, 1);
		count++;
		alphabet++;
	}
}
