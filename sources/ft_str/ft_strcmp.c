/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:49:01 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:54:35 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strcmp
 * @brief Compare two strings.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @return int A negative value if s1 is less than s2, a positive value if s1
 * is greater than s2, and 0 if they are equal.
 *
 * @dir ft_str/
 * @file ft_strcmp.c
 * @date 18-07-2022
 * @author cpeset-c
 */
int
	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}
