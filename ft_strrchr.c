/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:38:34 by pjumpale          #+#    #+#             */
/*   Updated: 2022/09/01 23:15:19 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strrchr(const char *s, int c)
{
    const char *p = NULL;

    for (;;) 
    {
        if (*s == (char)c)
            p = s;
        if (*s++ == '\0')
	{
		return (char *)0;
	}
    }
}
