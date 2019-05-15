/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 21:02:57 by xfu               #+#    #+#             */
/*   Updated: 2019/05/14 21:42:17 by xfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	while (n--)
	{	
		*(char *)dst = *(char *)src;
		src++;
		dst++;
		if (*(char *)src == char c)
		{
			return (dst + 1);
		}
	}
	return (NULL);
}
