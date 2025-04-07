/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:42:55 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:10:58 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_insertion_sort
 * @brief Sort an array of strings using the insertion sort algorithm.
 * 
 * @param tab The array of strings to sort.
 * @param cmp The comparison function to use for sorting.
 * 
 * @dir ft_sort/
 * @file ft_adv_sort_str_tab.c
 * @date 18-07-2022
 * @author cpeset-c
 */
void
	ft_insertion_sort(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i])
	{
		j = i;
		while (j > 0 && (*cmp)(tab[j - 1], tab[j]) > 0)
		{
			tmp = tab[j - 1];
			tab[j - 1] = tab[j];
			tab[j] = tmp;
			j--;
		}
		i++;
	}
}
