/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:22:21 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/29 13:00:39 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	len = max - min;
	range = malloc(len * sizeof (int));
	i = 0;
	while (i < len)
		range[i++] = min++;
	return (range);
}
