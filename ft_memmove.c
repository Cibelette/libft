/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagier <clagier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 18:25:12 by clagier           #+#    #+#             */
/*   Updated: 2019/04/24 18:25:17 by clagier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src2;
	char	*dst2;
	size_t	i;

	i = -1;
	src2 = (char *)src;
	dst2 = (char *)dst;
	if (src2 < dst2)
		while ((int)(--len) >= 0)
			*(dst2 + len) = *(src2 + len);
	else
		while (++i < len)
			*(dst2 + i) = *(src2 + i);
	return ((void *)dst);
}
