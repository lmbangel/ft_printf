/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <mmouhssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 16:56:14 by mmouhssi          #+#    #+#             */
/*   Updated: 2016/05/24 13:37:53 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wstrlen(wchar_t *str)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len = len + ft_sizewchar((long)str[i]);
		i++;
	}
	return (len);
}
