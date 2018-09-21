/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 22:11:04 by chpark            #+#    #+#             */
/*   Updated: 2018/06/28 22:11:11 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int	ft_ultimate_range(int **range, int min, int max)
{
	int *out;
	int tmp;

	if (min < max)
	{
		*range = (char *)malloc(sizeof(char) * (max - min));
		tmp = 0;
		while (tmp < max - min)
		{
			range[0][tmp] = min + tmp;
			tmp++;
		}
		return (max - min);
	}
	else
	{
		*range = 0;
		return (0);
	}
	return (0);
}
