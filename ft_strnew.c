/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:53:45 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/12 16:04:36 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void *mem;

	mem = (char*)malloc(size);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, (int)'\0', size + 1);
	return (mem);
}
