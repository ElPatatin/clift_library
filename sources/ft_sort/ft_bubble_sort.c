/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:03:34 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:09:35 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsort.h"

/**
 * @name ft_bubble_sort
 * @brief Sort an array of integers using the bubble sort algorithm.
 * 
 * @param arr The array of integers to sort.
 * @param size The size of the array.
 * 
 * @dir ft_sort/
 * @file ft_bubble_sort.c
 * @date 06-12-2024
 * @author cpeset-c
 */
void
    ft_bubble_sort(int **arr, size_t size)
{
    size_t  i;
    size_t  j;
    int     tmp;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if ((*arr)[j] > (*arr)[j + 1])
            {
                tmp = (*arr)[j];
                (*arr)[j] = (*arr)[j + 1];
                (*arr)[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}