/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 22:13:13 by chpark            #+#    #+#             */
/*   Updated: 2018/06/28 22:13:15 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *a)
{
	int		count;

	count = 0;
	while (a[count] != '\0')
		count++;
	return (count);
}

void	change(char *out, int argc, char **argv)
{
	int		count;
	int		tmp;
	int		app;
	char	*ctmp;

	count = 1;
	tmp = 0;
	app = 0;
	while (count < argc)
	{
		ctmp = argv[count];
		while (tmp < len(ctmp))
		{
			out[tmp + app] = ctmp[tmp];
			tmp++;
		}
		if (count != argc - 1)
			out[tmp + app] = '\n';
		tmp = 0;
		app += len(ctmp) + 1;
		count++;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*out;
	int		count;
	int		tmp;

	count = 1;
	tmp = 0;
	while (count < argc)
	{
		tmp += len(argv[count]);
		count++;
	}
	out = (char *)malloc(sizeof(char) * (tmp + argc - 2));
	change(out, argc, argv);
	return (out);
}
