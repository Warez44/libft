/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 07:50:26 by clingier          #+#    #+#             */
/*   Updated: 2018/10/08 09:15:43 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *sub, size_t n)
{
	if (!*sub)
		return (str);
	while (*str && n)
	{
		if (ft_strncmp(str, sub, ft_strlen(sub)) == 0 && ft_strlen(sub) <= n)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
