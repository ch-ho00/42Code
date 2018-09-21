char	*ft_strstr(char *str, char *to_find)
{
	int tmp;
	int i;

	if (!to_find)
		return (str);
	tmp = 0;
	while (str[tmp] != '\0')
	{
		if (str[tmp] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[tmp + i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (&str[tmp]);
		}
		tmp++;
	}
	return (0);
}
