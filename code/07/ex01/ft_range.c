/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 22:08:39 by chpark            #+#    #+#             */
/*   Updated: 2018/06/28 22:56:19 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int tmp;
	int *out;

	if (min < max)
	{
		out = (int *)malloc(sizeof(int) * (max - min));
		tmp = min;
		while (tmp < max)
		{
			out[tmp - min] = tmp;
			tmp++;
		}
		return (out);
	}
	else
		return 0;
	return 0;
}
int main()
{
int* res;
int i;
res = ft_range(5, 10);
for (i = 0; i < 5; i++)
	printf("%d,", res[i]);
printf("\n");
return 0; 
}
