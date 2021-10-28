/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:04:15 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/28 13:56:29 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
void	ft_putstr(char *s);

int		ft_last_id(int nbr)
{
	int	len;

	len = 0;
	while (nbr > 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len - 1);
}

void	ft_putnbr(int nbr)
{
	char	*s;
	int		i;
	
	i = ft_last_id(nbr);
	s = malloc((i + 1) * sizeof (char));
	if (!s)
		exit(-1);
	while (i >= 0)
	{
		s[i--] = '0' + nbr % 10;
		nbr = nbr / 10;
	}
	ft_putstr(s);
}
