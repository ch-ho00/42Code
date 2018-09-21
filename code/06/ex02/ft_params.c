void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i + 1][j] != '\0')
		{
			j++;
			ft_putchar(argv[i + 1][j]);
		}
		i++;
    ft_putchar('\n');
	}
	return (0);
}
