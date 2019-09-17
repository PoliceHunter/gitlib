/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:54:58 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/11 20:06:10 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ktr;

	ptr = (unsigned char *)s;
	ktr = (unsigned char)c;
	while (n--)
	{
		if (*ptr == ktr)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
