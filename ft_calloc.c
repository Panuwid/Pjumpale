/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:44:53 by pjumpale          #+#    #+#             */
/*   Updated: 2022/10/17 16:07:23 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	
	ptr = malloc (count * size);
	if (! ptr)
		return (NULL);
	ft_bzero (ptr, count * size);
	return (ptr);
}
