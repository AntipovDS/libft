/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 19:10:01 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 10:46:59 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *s)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}
