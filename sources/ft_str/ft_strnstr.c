/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:51:37 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 02:10:23 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strnstr
 * @brief Locate a substring in a string with a limit on the length of the search.
 *
 * @param haystack The string to search in.
 * @param needle The substring to search for.
 * @param len The maximum length to search.
 * @return char* A pointer to the first occurrence of needle in haystack, or NULL
 * if needle is not found.
 *
 * @dir ft_str/
 * @file ft_strnstr.c
 * @date 18-07-2022
 * @author cpeset-c
 */
char
	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *) haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (i + j < len && haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return ((char *) &haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
