/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:57:10 by pjumpale          #+#    #+#             */
/*   Updated: 2022/08/28 20:38:45 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if	((c>='A' && c<='Z') || ( c>='a' && c<='z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
		
}
