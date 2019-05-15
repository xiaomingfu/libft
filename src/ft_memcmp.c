/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 21:42:58 by xfu               #+#    #+#             */
/*   Updated: 2019/05/14 22:03:27 by xfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	if (len == 0)
	{
		return (0);
	}
	while(*(unsigned char) *s1 == *(unsigned char) *s2 && n--)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char) *s1 - *(unsigned char) *s2);
}
