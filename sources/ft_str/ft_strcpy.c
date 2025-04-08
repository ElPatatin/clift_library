/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:49:08 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:55:08 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @name ft_strcpy
 * @brief Copy a string from src to dst.
 *
 * @param dst The destination string.
 * @param src The source string.
 * @return char* A pointer to the destination string.
 *
 * @dir ft_str/
 * @file ft_strcpy.c
 * @date 18-07-2022
 * @author cpeset-c
 */
char
	*ft_strcpy(char *dst, char *src)
{
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst);
}
