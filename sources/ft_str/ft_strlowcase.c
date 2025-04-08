/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:51:10 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 02:15:04 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strlowcase
 * @brief Convert all uppercase letters in a string to lowercase.
 *
 * @param str The string to convert.
 * @return char* The converted string.
 *
 * @dir ft_str/
 * @file ft_strlowcase.c
 * @date 18-07-2022
 * @author cpeset-c
 * 
 * @see ft_strupcase
 * @see ft_toupper
 * @see ft_tolower
 */
char
	*ft_strlowcase(char	*str)
{
	ssize_t	i;

	i = -1;
	while (str[++i])
	{
		ft_tolower(str[i]);
	}
	return (str);
}
