/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_wcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:48:38 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/04/08 01:45:43 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @name ft_str_wcount
 * @brief Count the number of words in a string separated by a character.
 *
 * @param s The string to count the words in.
 * @param c The character that separates the words.
 * @return int The number of words in the string.
 *
 * @dir ft_str/
 * @file ft_str_wcount.c
 * @date 18-07-2022
 * @author cpeset-c
 */
int
	ft_str_wcount(char const *s, char c)
{
	size_t	i;
	int		nbr_w;

	i = 0;
	nbr_w = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] && s[i] == c)
			++i;
		while (s[i] && s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				++nbr_w;
			++i;
		}
	}
	return (nbr_w);
}
