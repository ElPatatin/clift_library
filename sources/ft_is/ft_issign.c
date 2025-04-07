/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 05:49:45 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/12/06 18:13:11 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libis.h"

/**
 * @name ft_issign
 * @brief Check if the character is a sign.
 * 
 * @param c The character to check.
 * @return t_bool Return TRUE if the character is a sign, otherwise return FALSE.
 * 
 * @dir ft_is/
 * @file ft_issign.c
 * @date 07-10-2022
 * @author cpeset-c
 * 
 * @see ft_issign
 */
t_bool
	ft_issign(int c)
{
	if (c == '-' || c == '+')
		return (TRUE);
	return (FALSE);
}
