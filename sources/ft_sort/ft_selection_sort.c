/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:04:46 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 02:16:22 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_selection_sort
 * @brief Sorts an array of integers using the selection sort algorithm.
 * 
 * @param arr The array to be sorted.
 * @param size The size of the array.
 * 
 * @dir ft_sort/
 * @file ft_selection_sort.c
 * @date 06-12-2024
 * @author cpeset-c
 */
void
    ft_selection_sort(int *arr, size_t size)
{
    size_t	i;
    size_t	j;
    int		min_idx;

    if (arr == NULL || size == 0)
        return ;
    i = 0;
    while (i < size - 1)
    {
        min_idx = i;
        j = i + 1;
        while (j < size)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
            j++;
        }
        if (min_idx != i)
            ft_swap(&arr[i], &arr[min_idx]);
        i++;
    }
}