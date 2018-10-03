/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 02:19:31 by lmbangel          #+#    #+#             */
/*   Updated: 2018/08/01 02:19:36 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		no_print(t_format format, char *word)
{
	if (format.precision == NULL)
		return (0);
	if (format.precision[0] == '0' || format.precision[0] == '.')
	{
		if (format.pre == '#' && (format.type == 'o' || format.type == 'O'))
			return (0);
		if (ft_strcmp(word, "0") == 0)
			return (1);
	}
	return (0);
}
