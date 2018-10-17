/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:52:57 by clingier          #+#    #+#             */
/*   Updated: 2018/10/11 13:00:51 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, char *src, size_t n)
{
	size_t	i;
	size_t	tmp_len;

	tmp_len = 0;
	while (dest[tmp_len] && tmp_len < n)
		tmp_len++;
	i = tmp_len;
	while (src[tmp_len - i] && tmp_len + 1 < n)
	{
		dest[tmp_len] = src[tmp_len - i];
		tmp_len++;
	}
	if (i < n)
		dest[tmp_len] = '\0';
	return (i + ft_strlen(src));
}
