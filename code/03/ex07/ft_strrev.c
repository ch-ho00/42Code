char	*ft_srev(char *s)
{
	int		n;
	int		i;
	char	c;

	n = 0;
	while (s[n] != '\0')
		n++;
	n = n - 1;
	i = 0;
	while (i < ((n + 1) / 2))
	{
		c = s[i];
		s[i] = s[n - i];
		s[n - i] = c;
		i++;
	}
	return (s);
}
