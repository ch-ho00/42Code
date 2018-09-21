int	ft_sqrt(int nb)
{
	int	out;

	if (nb < 0)
		return (0);
	out = 1;
	while (out * out < nb)
	   out = out + 1;
	if (out * out == nb)
		return (out);
	return (0);
}
