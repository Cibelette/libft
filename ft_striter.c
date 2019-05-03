/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagier <clagier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:59:19 by clagier           #+#    #+#             */
/*   Updated: 2019/04/25 16:37:35 by clagier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int len;
	int i;

	if (s == 0 || !f)
		return ;
	len = (int)ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(&s[i]);
		i++;
	}
}
