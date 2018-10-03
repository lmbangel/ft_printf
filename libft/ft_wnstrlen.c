/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wnstrlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <mmouhssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 16:56:14 by mmouhssi          #+#    #+#             */
/*   Updated: 2016/06/01 19:19:02 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wnstrlen(wchar_t *str, int lgt)
{
	int len;
	int i;
	int tmp;

	i = 0;
	len = 0;
	tmp = 0;
	while (str[i] != '\0')
	{
		tmp = len;
		len = tmp + ft_sizewchar((long)str[i]);
		if (len > lgt)
			break ;
		i++;
	}
	return (tmp);
}
