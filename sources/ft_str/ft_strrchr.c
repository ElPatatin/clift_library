/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:51:50 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 02:11:06 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strrchr
 * @brief Locate the last occurrence of a character in a string.
 *
 * @param s The string to search.
 * @param c The character to search for.
 * @return char* A pointer to the located character, or NULL if the character
 * does not appear in the string.
 *
 * @dir ft_str/
 * @file ft_strrchr.c
 * @date 18-07-2022
 * @author cpeset-c
 */
char
	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (*(s + len) != (char) c)
	{
		--len;
		if (len == -1)
			return (0);
	}
	return ((char *)(s + len));
}
