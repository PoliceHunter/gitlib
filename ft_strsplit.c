/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:48:59 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 15:17:43 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	j;
	size_t	len;

	if (s == NULL || !c)
		return (NULL);
	ret = (char **)malloc(sizeof(char *) * (ft_strlen((char *)s) + 1));
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
			continue;
		}
		len = 0;
		while (s[i + len] && (s[i + len] != c))
			len++;
		ret[j++] = ft_strsub(s, i, len);
		i += len;
	}
	ret[j] = 0;
	return (ret);
}
