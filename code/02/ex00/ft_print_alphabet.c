void	ft_putchar(char c);

void	ft_print_alphabet()
{
	int	l;

	l = 'a';
	while (l <= 'z')
	{
		ft_putchar(l);
		l++;
	}
}

int main()
{
	ft_print_alphabet();
	return 0;
}
