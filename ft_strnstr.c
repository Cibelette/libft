/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagier <clagier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 11:13:34 by clagier           #+#    #+#             */
/*   Updated: 2019/04/11 11:52:58 by clagier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		k;

	i = -1;
	k = 0;
	if (haystack[0] == '\0' && needle[0] != '\0')
		return (NULL);
	if (haystack[0] == '\0' || needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[++i] && i < len)
	{
		if (haystack[i] == needle[k])
		{
			while (haystack[i + k] == needle[k])
			{
				if (k + i >= len)
					return (NULL);
				k++;
				if (needle[k] == '\0')
					return ((char *)haystack + i);
			}
		}
		k = 0;
	}
	return (0);
}
