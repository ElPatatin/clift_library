/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:43:47 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:08:36 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_any
 * @brief Check if any of the strings in the array satisfy the condition defined
 * by the function f.
 * 
 * @param tab The array of strings to check.
 * @param f The function to apply to each string.
 * @return int Return 1 if any string satisfies the condition, otherwise return 0.
 * 
 * @dir ft_sort/
 * @file ft_any.c
 * @date 18-07-2022
 * @author cpeset-c
 */
int
	ft_any(char **tab, int (*f)(char *))
{
	while (*tab)
	{
		if ((*f)(*tab))
			return (1);
		tab++;
	}
	return (0);
}
