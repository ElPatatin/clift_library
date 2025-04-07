/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:43:52 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:10:00 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_count_if
 * @brief Count the number of strings in the array that satisfy the condition
 * defined by the function f.
 * 
 * @param tab The array of strings to check.
 * @param lenght The length of the array.
 * @param f The function to apply to each string.
 * @return int Return the number of strings that satisfy the condition.
 * 
 * @dir ft_sort/
 * @file ft_count_if.c
 * @date 18-07-2022
 * @author cpeset-c
 */
int
	ft_count_if(char **tab, int lenght, int (*f)(char *))
{
	unsigned int	cnt;
	ssize_t			i;

	cnt = 0;
	i = -1;
	while (++i < lenght)
	{
		if ((*f)(tab[i]))
			++cnt;
	}
	return (cnt);
}
