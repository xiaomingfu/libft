/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 22:41:31 by xfu               #+#    #+#             */
/*   Updated: 2019/05/10 22:54:31 by xfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	size_t len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	while (s[len] != c  && len >= 0)
	{
		len--;
	}
	if (len < 0)
	{
		return (NULL);
	}
	return ( char *(s + len));
}
