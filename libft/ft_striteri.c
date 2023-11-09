/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:24:08 by fdessoy-          #+#    #+#             */
/*   Updated: 2023/11/09 12:00:24 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	if (s && f)
	{
		i = 0;
		if (s[i] == '\0')
		{
			i++;
			s++;
		}
		while (*s)
			f(i++, s++);
	}
}
/*
void uppercase(unsigned int index, char *ch)
{
	index = 0;
    *ch = toupper(*ch);
}

int main(void)
{
    char str[] = "\0\n\f\tHeLoLoO";
    ft_striteri(str, uppercase);
    printf("%s\n", str);

    return 0;
} // */
