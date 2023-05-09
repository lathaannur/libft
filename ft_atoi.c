/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:30:34 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/09 17:06:28 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\f' || c == '\t' || c == '\n' || c == '\r'
		|| c == '\v');
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

    res = 0;
	sign = 1;
	while (ft_isspace(*str) == 1)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' && *str == '+')
		str++;
	while (isdigit(*str) == 1)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
