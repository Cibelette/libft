/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagier <clagier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 18:24:46 by clagier           #+#    #+#             */
/*   Updated: 2019/04/25 15:46:26 by clagier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	count;
	char	*s_src;
	char	*d_dst;

	if (!dst && !src)
		return (NULL);
	count = 0;
	s_src = (char *)src;
	d_dst = (char *)dst;
	while (count < n)
	{
		d_dst[count] = s_src[count];
		if ((char)c == d_dst[count])
			return ((void *)&d_dst[count + 1]);
		count++;
	}
	return (NULL);
}
