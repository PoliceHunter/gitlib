/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:13:01 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/19 15:56:21 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ktr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)src;
	ktr = (unsigned char *)dst;
	if (!ptr && !ktr)
		return (NULL);
	if (ptr < ktr)
	{
		while (n--)
			ktr[n] = ptr[n];
	}
	else
	{
		while (i < n)
		{
			ktr[i] = ptr[i];
			i++;
		}
	}
	return (dst);
}
