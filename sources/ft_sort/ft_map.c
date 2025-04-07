/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:44:07 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:12:36 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_map
 * @brief Apply the function f to each element of the array tab and return a new
 * array with the results.
 * 
 * @param tab The array of integers to apply the function to.
 * @param lenght The length of the array.
 * @param f The function to apply to each element of the array.
 * @return int* Return a new array with the results of applying the function f
 * to each element of the array tab.
 * 
 * @dir ft_sort/
 * @file ft_map.c
 * @date 18-07-2022
 * @author cpeset-c
 */
int
	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int		*res;
	ssize_t	i;

	i = -1;
	res = (int *)ft_calloc(sizeof(int), lenght);
	if (!res)
		return (0);
	if (!tab)
		return (res);
	while (++i < lenght)
		res[i] = (*f)(tab[i]);
	return (res);
}
