void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divisao;
	int	modulo;

	divisao = (*a / *b);
	modulo = *a % *b;
	*a = modulo;
	*b = divisao;
}
