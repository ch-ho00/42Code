int	ft_fibonacci(int i)
{
	if (i < 0)
		return (-1);
	else if (i == 0)
		return (0);
	else if (i == 1)
		return (1);
	else
		return (ft_fibonacci(i - 2) + ft_fibonacci(i - 1));
}
