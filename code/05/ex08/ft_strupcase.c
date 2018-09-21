char	*ft_strupcase(char *str)
{
	tmpnt tmp;

	tmp = 0;
	while (str[tmp] != '\0')
	{
		if (str[tmp] >= 'a' && str[tmp] <= 'z')
			str[tmp] = str[tmp] - 32;
		tmp++;
	}
	return (str);
}
