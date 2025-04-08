/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:52:30 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 02:14:39 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_tolower
 * @brief Convert a character to lowercase.
 *
 * @param c The character to convert.
 * @return int The converted character.
 *
 * @dir ft_str/
 * @file ft_tolower.c
 * @date 18-07-2022
 * @author cpeset-c
 */
int
	ft_tolower(int c)
{
	if (ft_isupper(c))
		c += 32;
	return (c);
}
