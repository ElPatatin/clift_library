/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:04:28 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:14:08 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsort.h"

typedef struct s_sort
{
    size_t  i;
    size_t  j;
    int     pivot;
    int     tmp;
}   t_sort;

/**
 * @name ft_quick_sort
 * @brief Sort an array of integers using the quick sort algorithm.
 * 
 * @param arr The array of integers to sort.
 * @param size The size of the array.
 * 
 * @dir ft_sort/
 * @file ft_quick_sort.c
 * @date 06-12-2024
 * @author cpeset-c
 */
void
    ft_quick_sort(int **arr, size_t size)
{
    t_sort  sort;

    if (size < 2)
        return ;
    sort.pivot = (*arr)[size / 2];
    sort.i = 0;
    sort.j = size - 1;
    while (sort.i <= sort.j)
    {
        while ((*arr)[sort.i] < sort.pivot)
            sort.i++;
        while ((*arr)[sort.j] > sort.pivot)
            sort.j--;
        if (sort.i <= sort.j)
        {
            sort.tmp = (*arr)[sort.i];
            (*arr)[sort.i] = (*arr)[sort.j];
            (*arr)[sort.j] = sort.tmp;
            sort.i++;
            sort.j--;
        }
    }
    ft_quick_sort(arr, sort.j + 1);
    ft_quick_sort(arr + sort.i, size - sort.i);
}