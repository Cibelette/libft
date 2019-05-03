/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagier <clagier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:31:01 by clagier           #+#    #+#             */
/*   Updated: 2019/04/14 15:42:20 by clagier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	i;
	size_t	size;

	i = 0;
	if (s == 0)
		return ;
	size = ft_strlen(s);
	while (i < size)
	{
		s[i] = '\0';
		i++;
	}
}
