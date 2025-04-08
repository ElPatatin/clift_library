/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:51:03 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 02:07:10 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strlen
 * @brief Calculate the length of a string.
 *
 * @param s The string to calculate the length of.
 * @return size_t The length of the string.
 *
 * @dir ft_str/
 * @file ft_strlen.c
 * @date 18-07-2022
 * @author cpeset-c
 */
size_t
	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
