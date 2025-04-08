/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 01:58:00 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:58:08 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strspn
 * @brief Calculate the length of the initial segment of s which consists
 * of characters in accept.
 *
 * @param s The string to search.
 * @param accept The characters to accept.
 * @return size_t The length of the initial segment of s which consists
 * of characters in accept.
 *
 * @dir ft_str/
 * @file ft_strspn.c
 * @date 08-04-2025
 * @author cpeset-c
 */
size_t
    ft_strspn(const char *s, const char *accept)
{
    size_t	i;
    size_t	j;

    i = 0;
    while (s[i])
    {
        j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                break ;
            j++;
        }
        if (!accept[j])
            return (i);
        i++;
    }
    return (i);
}