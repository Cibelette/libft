/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagier <clagier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 16:29:10 by clagier           #+#    #+#             */
/*   Updated: 2019/04/25 16:29:39 by clagier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	count;

	str = (char *)s;
	count = 0;
	while (count < n)
	{
		if ((char)c == str[0])
			return ((void *)str);
		str++;
		count++;
	}
	return (NULL);
}
