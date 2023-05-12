/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:12:03 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/12 18:19:10 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	diff;
	char	*dst_start;

	len = ft_strlen(src);
	if (!src)
		return (len);
	dst_start = dst;
	if (size > 0)
	{
		diff = (size_t)(dst_start - dst);
		while (diff < size - 1 && *src)
		{
			*dst++ = *src++;
			diff++;
		}
		*dst = '\0';
	}
	return (len);
}
