/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:19:07 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/12 16:42:14 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*tmp;

	tmp = ft_strnew(ft_strlen((char *)s));
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[i])
	{
		tmp[i] = (*f)(s[i]);
		i++;
	}
	return (tmp);
}
