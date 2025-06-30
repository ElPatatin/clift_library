/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:29:12 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/06/26 13:34:23 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		result;
	va_list	args_copy;

	va_start(args, format);
	result = 0;
	va_copy(args_copy, args);

	void *a = va_arg(args_copy, void *);

	va_end(args);
	va_end(args_copy);
	return (result);
}