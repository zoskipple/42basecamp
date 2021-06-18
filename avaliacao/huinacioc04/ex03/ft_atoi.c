#include <unistd.h>

int	ft_sign(char *str)
{
	int	index;
	int	neg;

	index = 0;
	neg = 1;
	while (str[index] != '\0')
	{
		if (str[index] == 45)
		{
			neg = neg * -1;
		}
		index++;
	}
	return (neg);
}

int	ft_join(int inicio, int fim, char *num, int sinal)
{
	int	resultado;
	int	multiplicador;
	int	index;

	multiplicador = 1;
	resultado = 0;
	index = 1;
	while (index <= inicio)
	{
		resultado = resultado + ((num[fim - index]) - 48) * multiplicador;
		multiplicador = multiplicador * 10;
		index++;
	}
	return (resultado * sinal);
}

int	ft_atoi(char *str)
{
	int	index;
	int	flag;
	int	sign;
	int	start;

	index = 0;
	flag = 0;
	start = 0;
	sign = ft_sign(str);
	while (str[index] != '\0' && flag == 0)
	{
		if (str[index] >= '0' && str[index] <= '9' && flag == 0)
		{
			if (!(str[index + 1] >= '0' && str[index + 1] <= '9'))
			{
				flag = 1;
			}
			start++;
		}
		index++;
	}
	return (ft_join(start, index, str, sign));
}
