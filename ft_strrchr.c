/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:38:34 by pjumpale          #+#    #+#             */
/*   Updated: 2022/09/02 15:28:20 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);	
	while (s[i] !=  c && i > 0)
	{
		i--;
	}
	if (s[i]  == c)	
		return ((char *)s + i);
	else
		return (NULL);
}

