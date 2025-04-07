/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:45:01 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:15:22 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_swap
 * @brief Swap the values of two integers.
 * 
 * @param a The first integer to swap.
 * @param b The second integer to swap.
 * 
 * @dir ft_sort/
 * @file ft_swap.c
 * @date 18-07-2022
 * @author cpeset-c
 */
void
	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
