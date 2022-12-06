/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:18:18 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/11/22 18:20:17 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	ft_strlen(const char *s)
{
	size_t	idx;

	idx = 0;
	if (!s)
		return (6);
	while (s[idx])
		idx++;
	return (idx);
}
