/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:39:30 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/28 17:34:14 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	lo;
	int	mid;
	int	hi;

	if (nb == 1)
		return (1);
	hi = nb;
	lo = 0;
	while (lo <= hi)
	{
		mid = (hi + lo) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			lo = mid + 1;
		else if (mid * mid > nb)
			hi = mid - 1;
	}
	return (0);
}
