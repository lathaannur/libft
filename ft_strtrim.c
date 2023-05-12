/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:18:11 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/12 16:10:02 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1)
		return (NULL);
	start = 0;
	end = strlen(s1) - 1;
	while (s1[start] && strchr(set, s1[start]))
		start++;
	while (end >= start && strrchr(set, s1[end]))
		end--;
	len = end - start;
	return (ft_substr(s1, start, len + 1));
}
