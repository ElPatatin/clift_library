/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:48:45 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:54:53 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strcapitalize
 * @brief Capitalize the first letter of each word in a string.
 *
 * @param str The string to capitalize.
 * @return char* The capitalized string.
 *
 * @dir ft_str/
 * @file ft_strcapitalize.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_islower
 * @see ft_isupper
 * @see ft_isdigit
 */
char
	*ft_strcapitalize(char *str)
{
	char	*start;

	start = str;
	if (ft_islower(*str))
		*str -= 32;
	++str;
	while (*str)
	{
		if (ft_isupper(*str))
			*str += 32;
		if (!ft_isdigit(*(str - 1))
			&& !ft_isupper(*(str - 1))
			&& !ft_islower(*(str - 1))
			&& ft_islower(*str))
			*str -= 32;
		++str;
	}
	return (start);
}
