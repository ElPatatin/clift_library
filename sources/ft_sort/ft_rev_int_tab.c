/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:44:13 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:14:24 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_rev_int_tab
 * @brief Reverse the order of the elements in the array tab.
 * 
 * @param tab The array of integers to reverse.
 * @param size The size of the array.
 * 
 * @dir ft_sort/
 * @file ft_rev_int_tab.c
 * @date 18-07-2022
 * @author cpeset-c
 */
void
	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}
