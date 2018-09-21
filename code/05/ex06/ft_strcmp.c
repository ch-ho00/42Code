int	ft_strcmp(char *s1, char *s2)
{
	int	tmp;

	tmp = 0;
	while (s1[tmp] != '\0' && s2[tmp] != '\0')
	{
		if (s1[tmp] != s2[tmp])
			return (s1[tmp] - s2[tmp]);
		tmp++;
	}
	if ((s1[tmp] == '\0' && s2[tmp] != '\0') || (s2[tmp] == '\0' && s1[tmp] != '\0'))
		return (s1[tmp] - s2[tmp]);
	return (0);
}
