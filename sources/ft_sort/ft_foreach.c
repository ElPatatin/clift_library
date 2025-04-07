/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:43:57 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:10:21 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_foreach
 * @brief Apply the function f to each element of the array tab.
 * 
 * @param tab The array of integers to apply the function to.
 * @param length The length of the array.
 * @param f The function to apply to each element of the array.
 * 
 * @dir ft_sort/
 * @file ft_foreach.c
 * @date 18-07-2022
 * @author cpeset-c
 */
void
	ft_foreach(int *tab, int length, void (*f)(int))
{
	ssize_t	i;

	i = -1;
	while (++i < length)
		(*f)(tab[i]);
}
