void	ft_putchar(char c);

void	ft_print_alphabet()
{
	int	l;

	l = 'z';
	while (l >= 'a')
	{
		ft_putchar(l);
		l--;
	}
}

int main()
{
	ft_print_alphabet();
	return 0;
}
