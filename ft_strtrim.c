/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:36:59 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/17 17:04:46 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	begin;
	size_t	len;
	size_t	index;
	char	*result;

	begin = 0;
	index = 0;
	len = ft_strlen((char *)s);
	result = (char *)malloc(sizeof(char) * len);
	if (!result || !s)
		return (NULL);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	while (s[begin] == ' ' || s[begin] == '\t' || s[begin] == '\n')
		begin++;
	while (begin < len)
		result[index++] = s[begin++];
	result[index] = '\0';
	return (result);
}
