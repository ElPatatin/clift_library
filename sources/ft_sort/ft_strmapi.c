/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:44:54 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:15:38 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_strmapi
 * @brief Apply the function f to each character of the string s, passing its
 * index as first argument. Each character is passed by address to f to be
 * modified if necessary.
 * 
 * @param s The string to iterate over.
 * @param f The function to apply to each character of the string.
 * @return char* Return a new string with the results of applying the function f
 * to each character of the string s.
 * 
 * @dir ft_sort/
 * @file ft_strmapi.c
 * @date 18-07-2022
 * @author cpeset-c
 */
char
	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	if (!s || !f)
		return (NULL);
	ptr = (char *)ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		++i;
	}
	return (ptr);
}
