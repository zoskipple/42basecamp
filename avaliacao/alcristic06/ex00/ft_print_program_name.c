#include<unistd.h>
int	main(int argc, char *arcv[])
{
	int	i;

	i = 0;
	if (argc > 0)
	{
		while (arcv[0][i])
		{
			write(1, &arcv[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
