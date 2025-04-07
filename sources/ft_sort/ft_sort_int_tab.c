/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:44:25 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:14:42 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_sort_int_tab
 * @brief Sort an array of integers in ascending order.
 * 
 * @param tab The array of integers to sort.
 * @param size The size of the array.
 * 
 * @dir ft_sort/
 * @file ft_sort_int_tab.c
 * @date 18-07-2022
 * @author cpeset-c
 */
void
	ft_sort_int_tab(int *tab, unsigned int size)
{
	t_unt	i;
	int		swap;

	swap = 1;
	while (swap == 1)
	{
		i = 1;
		swap = 0;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				ft_swap(&tab[i - 1], &tab[i]);
				swap = 1;
			}
			++i;
		}
	}
}
