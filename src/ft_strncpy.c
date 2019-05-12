/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 22:03:42 by xfu               #+#    #+#             */
/*   Updated: 2019/04/08 22:57:45 by xfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int	i;

	i = 0;
	while(src[i] && len > i)
	{
		dst[i] = src[i];
		i++;
	}
	while(len  > i)
	{
		dst[i++] = '\0';
	}
	return (dst);
}