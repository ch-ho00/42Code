#include "ft_stock_par.h"
#include <stdlib.h>
#include <stdio.h>
#include "ft_split_whitespaces.c"

char **ft_split_whitespaces(char *c);

int len(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return count;
}

char *getstr(char *str)
{
	char *out;
	int count;

	out = (char *)malloc(sizeof(char) * len(str));
	count = 0;
	while (count < len(str))
	{
		out[count] = str[count];
		count++;
	}
	return out; 
}

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
	t_stock_par *out;
	int count;

	out = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	count = 0;
	while (count < ac)
	{
		out[count].size_param = len(av[count]);
		out[count].str = av[count];
		out[count].copy = getstr(av[count]);
		out[count].tab = ft_split_whitespaces(getstr(av[count]));
		count++;
	}
	return &out[0]; 
}
int main(int argc, char **argv)
{
	t_stock_par *tmp = ft_param_to_tab(argc, argv);
	int i =0;
	while (i < 3)
	{
		printf("%s\n", tmp[i].copy);
		i++;
	}
	return 0;
}
