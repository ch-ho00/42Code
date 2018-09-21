void	ft_putchar(char c);

void	display_num(int nb)
{
	int	f;
	int	s;

	if (nb > 9)
	{
		f = nb / 10;
		s = nb % 10;
		ft_putchar(f + 48);
		ft_putchar(s + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2()
{
	int	i;
	int	o;

	i = 0;
	while (i <= 99)
	{
		o = i + 1;
		while (o <= 99)
		{
			display_num(i);
			ft_putchar(' ');
			display_num(o);
			if (i < 98 || o < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++o;
		}
		++i;
	}
}
