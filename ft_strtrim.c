/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:36:59 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/20 17:19:33 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		start_index(char const *s)
{
	size_t begin;

	begin = 0;
	while (s[begin] == ' ' || s[begin] == '\t' || s[begin] == '\n')
		begin++;
	return (begin);
}

static	int		end_index(char const *s)
{
	size_t len;

	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	return (len);
}

char			*ft_strtrim(char const *s)
{
	size_t	begin;
	size_t	end;
	size_t	index;
	char	*result;

	if (!s)
		return (NULL);
	if (!*s)
	{
		result = (char *)malloc(sizeof(char) * 1);
		result[0] = '\0';
		return (result);
	}
	index = 0;
	begin = start_index(s);
	end = end_index(s);
	if (s[end] == '\0')
		return (result = (char *)malloc(sizeof(char) * 1));
	if (!(result = (char *)malloc(sizeof(char) * (end - begin + 2))))
		return (NULL);
	while (begin < end + 1)
		result[index++] = s[begin++];
	result[index] = '\0';
	return (result);
}
