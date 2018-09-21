/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 22:43:02 by chpark            #+#    #+#             */
/*   Updated: 2018/06/28 22:43:09 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

char	**ft_split_whitespaces(char *str);

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	int count;
	int tmp;

	count = 0;
	tmp = 0;
	while (tab[count] != 0)
		count++;
	while (tmp < count)
	{
		ft_putstr(tab[tmp]);
		tmp++;
	}
}
