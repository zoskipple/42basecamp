#include <unistd.h>

void	write_result(char first, char second, char third, char fourth)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &space, 1);
	write(1, &third, 1);
	write(1, &fourth, 1);
	if (first == '9' && second == '8' && third == '9' && fourth == '9')
		return ;
	else
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	comb2_iterator(char first, char second, char third, char fourth)
{
	while (first <= '9')
	{
		while (second <= '9')
		{
			while (third <= '9')
			{
				while (fourth <= '9')
				{
					write_result(first, second, third, fourth);
					fourth++;
				}
				fourth = '0';
				third++;
			}
			second++;
			third = first;
			fourth = second + 1;
		}
		first++;
		second = '0';
		fourth = second + 1;
		third = first;
	}
}

void	ft_print_comb2(void)
{
	char	first;
	char	second;
	char	third;
	char	fourth;

	first = '0';
	second = '0';
	third = '0';
	fourth = '0';
	comb2_iterator(first, second, third, fourth);
}
