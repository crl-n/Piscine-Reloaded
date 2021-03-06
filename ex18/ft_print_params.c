/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:38:36 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/29 16:50:13 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 1;
	while (i <= argc - 1)
	{
		str = argv[i++];
		while (*str)
			ft_putchar(*str++);
		ft_putchar('\n');
	}
	return (0);
}
