/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 23:19:21 by xfu               #+#    #+#             */
/*   Updated: 2019/05/13 00:05:53 by xfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	if (n = 0)
	{
		return (0);
	}
	while (n > 0 && *s1 && *s1 == *s2)
	{
		n--;
		s1++;
		s2++;
	}
	return ((unsign char) *s1 - (unsign char )*s2);
}
