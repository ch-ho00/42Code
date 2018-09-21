void	ft_putchar(char c);

void	ft_print_comb()
{
	int	f;
	int	s;
	int	t;

	f = '0' - 1;
	while (++f <= '9')
	{
		s = f;
		while (++s <= '9')
		{
			t = s + 1;
			while (t <= '9')
			{
				ft_putchar(f);
				ft_putchar(s);
				ft_putchar(t);
				if (f != '7' || s != '8' || t != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				t++;
			}
		}
	}
}
