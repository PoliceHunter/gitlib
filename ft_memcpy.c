/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:59:08 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/19 15:46:31 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ktr;

	ktr = (unsigned char *)src;
	ptr = (unsigned char *)dst;
	i = 0;
	if (!ptr && !ktr)
		return (0);
	while (i < n)
	{
		ptr[i] = ktr[i];
		i++;
	}
	return (dst);
}
