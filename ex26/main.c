/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:17:54 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/30 11:52:16 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_count_if(char **tab, int(*f)(char*));

int	ft_isalpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char	**strs;
	char	s1[] = "ABC";
	char	s2[] = "abc";

	strs = malloc(3 * sizeof (char*));
	if (!strs)
		return (0);
	strs[0] = s1;
	strs[1] = s2;
	strs[2] = 0;
	printf("%d\n", ft_count_if(strs, ft_isalpha));
	return (0);
}
