/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:44:47 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:15:17 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_striteri
 * @brief Apply the function f to each character of the string s, passing its
 * index as first argument. Each character is passed by address to f to be
 * modified if necessary.
 * 
 * @param s The string to iterate over.
 * @param f The function to apply to each character of the string.
 * @return void
 * 
 * @dir ft_sort/
 * @file ft_striteri.c
 * @date 18-07-2022
 * @author cpeset-c
 */
void
	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
