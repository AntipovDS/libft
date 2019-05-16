/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:47:10 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 19:13:06 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_delarr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr && arr[i])
		free(arr[i++]);
	free(arr);
}
