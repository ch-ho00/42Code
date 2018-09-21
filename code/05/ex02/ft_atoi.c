int	ft_atoi(char *str)
{
	int	tmp;
	int	i;
	int	res;
	int	neg;

	tmp = 0;
	while (str[tmp] != '\0' && (str[tmp] == ' ' || str[tmp] == '\t' ||
			str[tmp] == '\r' || str[tmp] == '\n'))
		tmp++;
	i = tmp;
	res = 0;
	neg = 0;
	while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') ||
				(i == tmp && (str[i] == '-' || str[i] == '+'))))
	{
		if (str[i] == '-')
			neg = 1;
		if (str[i] >= '0' && str[i] <= '9')
			res = (res * 10) + (str[i] - 48);
		++i;
	}
	if (neg)
		res = res * (-1);
	return (res);
}
