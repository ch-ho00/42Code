void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int	i;
	int	o;
	int	j;

	i = argc - 1;
	o = 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			++j;
      ft_putchar(argv[i][j]);
		}
		ft_putchar('\n');
		++o;
    --i`;

	}
	return (0);
}
