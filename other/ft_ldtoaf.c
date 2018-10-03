/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoaf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 02:08:59 by lmbangel          #+#    #+#             */
/*   Updated: 2018/08/01 02:12:49 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void		ft_round(char *str, int i, int b)
{
	if (str[i] > '4' && str[i] <= '9')
	{
		str[i] = '\0';
		b = 1;
		i--;
		while (i > 0)
		{
			if (str[i] == '9' && b == 1)
			{
				str[i] = '0';
				b = 1;
			}
			else if (b == 1)
			{
				str[i] = str[i] + 1;
				b = 0;
			}
			else
				break ;
			i--;
		}
	}
	else
		str[i] = '\0';
}

static char	*ft_fill_str(char *str, long int nbr2)
{
	char *n;
	char *tmp;

	n = ft_lltoa(nbr2);
	tmp = ft_strjoin(n, ".");
	free(n);
	n = ft_strjoin(tmp, str);
	free(tmp);
	free(str);
	return (n);
}

char		*ft_ldtoaf(double nbr, int size)
{
	long long	n;
	long long	nbr2;
	int			i;
	int			b;
	char		*str;

	str = (char *)malloc(size + 1);
	ft_init_str(str, '0', size + 1);
	nbr2 = nbr;
	b = 0;
	i = 0;
	while (i <= size)
	{
		n = (long long)nbr;
		nbr = nbr - (double)n;
		nbr = nbr * 10;
		str[i] = nbr + '0';
		i++;
	}
	i--;
	ft_round(str, i, b);
	str = ft_fill_str(str, nbr2);
	return (str);
}
