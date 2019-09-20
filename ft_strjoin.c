/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:48:06 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/20 13:24:11 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	if (!(tmp = (char *)malloc(sizeof(char) * (i + j) + 1)))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		tmp[i] = (char)s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		tmp[i] = (char)s2[j];
		j++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
