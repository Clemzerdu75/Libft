/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:32:24 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 11:31:17 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* Create a string, allocate the right amount of memory and copy an other string */
char	*ft_strdup(const char *s1)
{
	char	*src2;
	int		i;

	if (!(src2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (0);
	i = 0;
	while (s1[i])
	{
		src2[i] = s1[i];
		i++;
	}
	src2[i] = '\0';
	return (src2);
}
