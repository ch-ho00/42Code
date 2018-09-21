void	ft_putchar(char c);

void	ft_putn(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = nb * -1;
	}
	else
		n = nb;
	if (n >= 10)
	   ft_putn(n / 10);
	ft_putchar(n % 10 + 48);
}
