/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:44:02 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:11:04 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_is_sort
 * @brief Check if the array is sorted in ascending or descending order.
 * 
 * @param tab The array of integers to check.
 * @param lenght The length of the array.
 * @param f The comparison function to use for sorting.
 * @return int Return 1 if the array is sorted, otherwise return 0.
 * 
 * @dir ft_sort/
 * @file ft_is_sort.c
 * @date 18-07-2022
 * @author cpeset-c
 */
int
	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int		i;
	int		plus;
	int		minus;

	i = -1;
	plus = 0;
	minus = 0;
	while (++i < (lenght - 1))
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			minus++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			plus++;
	}
	return (plus == i || minus == i);
}
