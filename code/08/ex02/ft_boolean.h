/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:23:28 by chpark            #+#    #+#             */
/*   Updated: 2018/06/29 16:23:31 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BOOLEAN_H__
# define __FT_BOOLEAN_H__

# define TRUE 1
# define FALSE 0
# define EVEN(x) !(x % 2)
# define EVEN_MSG "I have an even number of arguements.\n"
# define ODD_MSG "I have an odd number of arguements.\n"
# define SUCCESS 0
#include <unistd.h>

typedef int	t_bool;

#endif
