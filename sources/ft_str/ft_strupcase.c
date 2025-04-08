/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:52:12 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 02:14:58 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strupcase
 * @brief Convert all lowercase letters in a string to uppercase.
 *
 * @param str The string to convert.
 * @return char* The converted string.
 *
 * @dir ft_str/
 * @file ft_strupcase.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_strlowcase
 * @see ft_toupper
 * @see ft_tolower
 */
char
	*ft_strupcase(char	*str)
{
	ssize_t	i;

	i = -1;
	while (str[++i])
	{
		ft_toupper(str[i]);
	}
	return (str);
}
