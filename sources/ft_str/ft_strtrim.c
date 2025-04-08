/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:52:01 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 02:11:21 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strtrim
 * @brief Trim characters from the beginning and end of a string.
 *
 * @param s1 The string to trim.
 * @param set The characters to trim.
 * @return char* A new string with the trimmed characters, or NULL if an error
 * occurs.
 *
 * @dir ft_str/
 * @file ft_strtrim.c
 * @date 18-07-2022
 * @author cpeset-c
 */
char
	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strrchr(set, s1[end]))
		--end;
	return (ft_substr(s1, 0, end + 1));
}
