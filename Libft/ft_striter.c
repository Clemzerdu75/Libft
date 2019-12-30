/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:06:10 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/16 16:26:20 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Apply a function on each char of a string */
void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		while (*s)
		{
			(*f)(s);
			s++;
		}
	}
	return ;
}
