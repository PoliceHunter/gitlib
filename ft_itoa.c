/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:56:01 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/17 19:44:10 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(long nb)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	dig;
	int		i;

	dig = n;
	i = ft_len(dig);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (dig == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (dig < 0)
	{
		str[0] = '-';
		dig = dig * -1;
	}
	while (dig > 0)
	{
		str[i--] = 48 + (dig % 10);
		dig = dig / 10;
	}
	return (str);
}
