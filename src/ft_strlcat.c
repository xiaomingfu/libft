/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 23:09:04 by xfu               #+#    #+#             */
/*   Updated: 2019/05/10 22:24:28 by xfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t res;
	size_t j;
	
	i = 0;
	j = 0;
	src_len = 0;
	while (dst[i])
	{
		i++;
	}
	while (src[srclen])
	{
		srclen++;
	}
	res = src_len + (dstsize > i) ? i : dstsize;
	while (dstsize > 0 && src[j] && i + j < dstsize - 1)
	{
		dst[i + j]= src[j];
		j++;
	}
	if (dstsize != 0)
	{
		dst[i + j] = '\0';
	}
	return (res);
}
