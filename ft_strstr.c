/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:54:57 by clingier          #+#    #+#             */
/*   Updated: 2018/10/08 08:52:32 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *sub)
{
	if (*sub == '\0')
		return (str);
	while (*str)
	{
		if (*str == *sub && ft_memcmp(str, sub, ft_strlen(sub)) == 0)
			return (str);
		str++;
	}
	return (NULL);
}
