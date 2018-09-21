int	ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	out;

	if (nb < 0 || nb > 12)
		return (0);
	i = 2;
	out = 1;
	while (i <= nb)
	{
		out = out * i;
		++i;
	}
	return (out);
}
