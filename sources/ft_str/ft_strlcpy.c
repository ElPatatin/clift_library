/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:50:34 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 02:07:18 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strlcpy
 * @brief Copy a string from src to dst with a limit on the size of the destination string.
 *
 * @param dst The destination string.
 * @param src The source string.
 * @param dstsize The size of the destination buffer.
 * @return size_t The total length of the string that would have been created if
 * there was enough space in the destination buffer.
 *
 * @dir ft_str/
 * @file ft_strlcpy.c
 * @date 18-07-2022
 * @author cpeset-c
 */
size_t
	ft_strlcpy(char *dst, const char *src, ssize_t dstsize)
{
	ssize_t	i;
	t_unt	len;

	i = -1;
	len = ft_strlen(src);
	if (!dstsize)
		return (0);
	while (src[++i] && i < (dstsize - 1))
		dst[i] = src[i];
	dst[i] = '\0';
	return (len);
}
