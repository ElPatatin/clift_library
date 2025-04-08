/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:52:38 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 02:14:46 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_toupper
 * @brief Convert a character to uppercase.
 *
 * @param c The character to convert.
 * @return int The converted character.
 *
 * @dir ft_str/
 * @file ft_toupper.c
 * @date 18-07-2022
 * @author cpeset-c
 */
int
	ft_toupper(int c)
{
	if (ft_islower(c))
		c -= 32;
	return (c);
}
