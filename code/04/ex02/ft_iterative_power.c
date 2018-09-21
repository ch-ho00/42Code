int	ft_iterative_p(int nb, int p)
{
	int	i;
	int	out;

	if (p < 0)
		return (0);
	if (p == 0)
		return (1);
	i = 1;
	out = nb;
	while (i != p)
	{
		out *= nb;
		i++;
	}
	return (out);
}
