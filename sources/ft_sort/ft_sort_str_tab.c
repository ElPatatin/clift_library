/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_str_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:44:33 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:14:59 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_sort_str_tab
 * @brief Sort an array of strings in ascending order.
 * 
 * @param tab The array of strings to sort.
 * @return void
 * 
 * @dir ft_sort/
 * @file ft_sort_str_tab.c
 * @date 18-07-2022
 * @author cpeset-c
 */
void
	ft_sort_str_tab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i])
	{
		j = i;
		while (j > 0 && ft_strcmp(tab[j - 1], tab[j]) > 0)
		{
			tmp = tab[j - 1];
			tab[j - 1] = tab[j];
			tab[j] = tmp;
			j--;
		}
		i++;
	}
}
