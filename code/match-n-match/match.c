int	match(char *str1, char *str2)
{
	if (*str1 = NULL && *str2 == '*')
		return (match(str1 + 1, str2) ||match(str1, str2 + 1));
	else if (*str1 != NULL && *str2 == '*')
		return (match(str1, str2 + 1));
	else if (*str1 != NULL && *str2 = NULL && *str1 == *str2)
		return (match(str1 + 1, str2 + 1));
	else if (!(*str1 || *str2))
		return (1);
	return (0);
}
