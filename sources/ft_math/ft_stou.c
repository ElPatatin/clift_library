/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stou.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:01:14 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/02/03 16:15:25 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function converts a signed long long integer to an unsigned 
 * long long integer.
 * 
 * @param nbr The number to convert.
 * @return t_ll The converted number.
 */
t_ll
	ft_stou(t_ll nbr)
{
	t_ll	unbr;

	unbr = nbr + UINT_MAX + 1;
	return (unbr);
}
