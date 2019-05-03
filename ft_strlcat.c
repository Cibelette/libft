/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagier <clagier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 16:31:21 by clagier           #+#    #+#             */
/*   Updated: 2019/04/25 16:31:24 by clagier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	j;
	size_t	ret;

	len = ft_strlen(dst);
	ret = size;
	if (len > size)
		len = size;
	j = -1;
	while (src[++j] && size-- > len + 1)
		dst[j + len] = src[j];
	if (ret > j + len)
		dst[j + len] = '\0';
	return (ft_strlen(src) + len);
}
