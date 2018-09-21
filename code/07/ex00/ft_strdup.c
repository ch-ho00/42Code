/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 22:07:44 by chpark            #+#    #+#             */
/*   Updated: 2018/06/28 22:07:46 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(char *src)
{
	int count;

	count = 0;
	while (src[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		count;
	char	*out;

	count = 0;
	out = (char *)malloc((length(src) + 1) * sizeof(char));
	while (src[count] != '\0')
	{
		out[count] = src[count];
		count++;
	}
	out[count] = '\0';
	return (out);
}
