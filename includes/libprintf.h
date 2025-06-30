/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:25:44 by cpeset-c          #+#    #+#             */
/*   Updated: 2025/06/26 13:35:04 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include "commons.h"
# include <stdarg.h>

# define PRINTF_FLAGS_MINUS		(1 << 0)
# define PRINTF_FLAGS_PLUS		(1 << 1)
# define PRINTF_FLAGS_ZERO		(1 << 2)
# define PRINTF_FLAGS_SPACE		(1 << 3)
# define PRINTF_FLAGS_HASH		(1 << 4)

# define PRINTF_TYPE_CHAR		'c'
# define PRINTF_TYPE_STRING		's'
# define PRINTF_TYPE_POINTER	'p'
# define PRINTF_TYPE_DECIMAL	'd'
# define PRINTF_TYPE_INTEGER	'i'
# define PRINTF_TYPE_UNSIGNED	'u'
# define PRINTF_TYPE_HEX_LOWER	'x'
# define PRINTF_TYPE_HEX_UPPER	'X'
# define PRINTF_TYPE_PERCENT	'%'

# define PRINTF_TYPE_ALL		"cspdiuxX%"

typedef struct s_printf_data
{
	int		fd;
	t_unt	flags;
	int		width;
	int		precision;
	char	type;
}	t_printf_data;

int	ft_printf(const char *format, ...);
int	ft_vprintf(const char *format, va_list args);

#endif