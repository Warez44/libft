/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:54:31 by clingier          #+#    #+#             */
/*   Updated: 2018/10/07 19:54:33 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	if (ft_strchr(str, c) == NULL)
		return (NULL);
	while (*str)
		str++;
	while (*str != (char)c)
		str--;
	return (str);
}
