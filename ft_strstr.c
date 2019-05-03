/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagier <clagier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:11:03 by clagier           #+#    #+#             */
/*   Updated: 2019/04/11 11:12:26 by clagier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;
	char	*ndl;
	char	*hs;

	ndl = (char *)needle;
	hs = (char *)haystack;
	i = -1;
	j = 0;
	k = 0;
	if (ndl[0] == '\0')
		return (hs);
	while (haystack[++i])
	{
		if (haystack[i] == ndl[j])
		{
			k = i;
			while (haystack[k++] == ndl[j++])
				if (ndl[j] == '\0')
					return ((char *)&hs[i]);
		}
		j = 0;
	}
	return (0);
}
