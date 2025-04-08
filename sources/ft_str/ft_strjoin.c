/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:49:39 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:58:36 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strjoin
 * @brief Join two strings into a new string.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return char* A pointer to the new string, or NULL if an error occurs.
 *
 * @dir ft_str/
 * @file ft_strjoin.c
 * @date 18-07-2022
 * @author cpeset-c
 */
char
	*ft_strjoin(char *s1, char *s2)
{
	char	*dst;
	char	*ptr;

	if (!s1)
	{
		s1 = ft_strdup("");
		if (!s1)
			return (NULL);
	}
	dst = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!dst)
		return (NULL);
	ptr = dst;
	while (*s1)
		*dst++ = *s1++;
	while (*s2)
		*dst++ = *s2++;
	ft_delete((void *)s1);
	return (ptr);
}
