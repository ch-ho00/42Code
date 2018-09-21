/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 22:49:34 by chpark            #+#    #+#             */
/*   Updated: 2018/06/28 22:49:42 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		into_num(char a, char *base)
{
	int count;

	count = 0;
	while (base[count] != '\0')
	{
		if (base[count] == a)
			break ;
		count++;
	}
	if (base[count] == '\0' && a != '+' && a != '-')
		return (-1);
	if (a == '+' || a == '-')
		return (0);
	return (count);
}

int		len(char *base)
{
	int count;

	count = 0;
	while (base[count] != '\0')
		count++;
	return (count);
}

char	*change(int num, char *base_to, int pn)
{
	char	*out;
	int		tmp;
	int		count;

	count = 1;
	tmp = num;
	while (tmp != 0)
	{
		count++;
		tmp = tmp / len(base_to);
	}
	out = (char *)malloc(sizeof(char) * (count + pn));
	if (num < len(base_to))
		return (&base_to[num]);
	tmp = 1;
	count--;
	out[0] = '-';
	while (num != 0)
	{
		out[count - tmp + pn] = base_to[num % len(base_to)];
		num = num / len(base_to);
		tmp++;
	}
	out[count + pn] = '\0';
	return (&out[0]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int number;
	int tmp;
	int pn;

	number = 0;
	tmp = 0;
	pn = 0;
	if (nbr[0] == '-')
		pn = 1;
	while (nbr[tmp] != '\0')
	{
		if (into_num(nbr[tmp], base_from) == -1)
			return (0);
		if (nbr[tmp] != '+' && nbr[tmp] != '-')
			number = number * len(base_from) + into_num(nbr[tmp], base_from);
		tmp++;
	}
	if (number == 0)
		return (nbr);
	return (change(number, base_to, pn));
}
