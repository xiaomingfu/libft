/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 21:59:22 by xfu               #+#    #+#             */
/*   Updated: 2019/05/13 22:44:28 by xfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	unsigned char	*ret;

	ret = unsigned char *b;
	while (len > 0)
	{
		*ret = unsigned char c;
		ret++;
		len--;
	}
	return (b);
}
