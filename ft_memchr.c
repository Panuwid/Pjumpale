/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:14:30 by pjumpale          #+#    #+#             */
/*   Updated: 2022/09/19 21:26:17 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char *p;
	size_t i;

	p = (char *)s;
	i = 0;
	
	while (*p != (char) c && i++ < n)
	{
		if (!*p++)
		{
		return (NULL);
		}
	}
	return (char *)p;
}

