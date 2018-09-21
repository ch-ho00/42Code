char	change(char c)
{
	int		i;
	char	rend;

	i = 0;
	rend = c;
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (c);
	while (i < 42)
	{
		rend++;
		if (rend == 'z' + 1 || rend == 'Z' + 1)
			rend -= 'z' - 'a' + 1;
		i++;
	}
	return (rend);
}

char	*ft_rot42(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		s[i] = change(s[i]);
		i++;
	}
	return (str);
}
