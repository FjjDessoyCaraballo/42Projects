/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:51:35 by fdessoy-          #+#    #+#             */
/*   Updated: 2023/11/08 15:42:08 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	long	res;
	int		sign;

	sign = 1;
	res = 0;
	while ((*s >= 9 && *s <= 13) || *s == ' ')
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s != '\0' && (*s >= '0' && *s <= '9'))
	{
		res = (res * 10) + (*s - '0');
		s++;
		if (res < 0)
		{
			if (sign == 1)
				return ((int)9223372036854775807);
			return ((int)9223372036854775807 - 1);
		}
	}
	return ((int)res * sign);
}
/*
int main(void)
{
	char str[] = "-9147483648";

	int val = ft_atoi(str);
	printf("%d \n", val);
	return (0);
} // */
