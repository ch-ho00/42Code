
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	j;

	j = 0;
	while (j < length)
	{
		(*f)(tab[j]);
		j++;
	}
}
