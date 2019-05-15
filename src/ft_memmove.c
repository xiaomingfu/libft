/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 20:44:41 by xfu               #+#    #+#             */
/*   Updated: 2019/05/14 21:01:11 by xfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	void	*ret;
	ret = dst;

	if(dst > src && dst < src + len)
	{
		src = char *src + len - 1;
		dst = char *dst + len - 1;
		while(len--)
		{
			*(char *)dst = *(char *)src;
			s--;
			d--;
		}	
	}
	else
	{
		*(char*) dst = *(char *)src;
		while(len--)
		{
			d++;
			s++;
		}
	}
	return ret;
}
