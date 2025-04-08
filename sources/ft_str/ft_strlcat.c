/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:49:46 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 02:06:25 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strlcat
 * @brief Concatenate two strings with a limit on the size of the destination string.
 *
 * @param dest The destination string.
 * @param src The source string.
 * @param dstsize The size of the destination buffer.
 * @return size_t The total length of the string that would have been created if
 * there was enough space in the destination buffer.
 *
 * @dir ft_str/
 * @file ft_strlcat.c
 * @date 18-07-2022
 * @author cpeset-c
 */
size_t
	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	t_unt	src_s;
	t_unt	dest_s;
	t_unt	i;

	src_s = ft_strlen(src);
	dest_s = ft_strlen(dest);
	i = 0;
	if (dstsize == 0)
		return (src_s);
	if (dstsize <= dest_s)
		return (dstsize + src_s);
	while (dstsize && (--dstsize - dest_s) && src[i])
	{
		dest[dest_s + i] = src[i];
		i++;
	}
	dest[dest_s + i] = '\0';
	return (src_s + dest_s);
}
