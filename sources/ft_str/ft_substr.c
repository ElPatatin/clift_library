/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:52:20 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 02:12:37 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_substr
 * @brief Create a substring from a string.
 * If the start index is greater than
 * the length of the string, an empty string is returned.
 * If the length of the substring is greater than the length of the string,
 * the length is adjusted to the length of the string minus the start index.
 *
 * @param s The string to create the substring from.
 * @param start The starting index of the substring.
 * @param len The length of the substring.
 * @return char* A pointer to the new substring, or NULL if an error occurs.
 *
 * @dir ft_str/
 * @file ft_substr.c
 * @date 18-07-2022
 * @author cpeset-c
 */
char
	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dst;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	dst = (char *)ft_calloc(len + 1, sizeof(char));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s + start, len);
	return (dst);
}
