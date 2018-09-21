int	ft_recursive_p(int nb, int p)
{
	if (p < 0)
		return (0);
	if (p > 0)
		return (nb * ft_recursive_p(nb, --p));
	else
		return (1);
}
