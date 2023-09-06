/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:25:15 by msaadidi          #+#    #+#             */
/*   Updated: 2023/09/02 16:41:33 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_n(short n)
{
	char	c;

	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + 48);
		return ;
	}
	c = (n / 10) + 48;
	ft_putchar(c);
	c = (n % 10) + 48;
	ft_putchar(c);
}

void	ft_print_comb2(void)
{
	short	v[2];

	v[0] = 0;
	while (v[0] <= 98)
	{
		v[1] = v[0] + 1;
		while (v[1] <= 99)
		{
			if (v[1] > v[0])
			{
				write_n(v[0]);
				ft_putchar(32);
				write_n(v[1]);
				if (!(v[0] == 98 && v[1] == 99))
					write(1, ", ", 2);
			}
			v[1]++;
		}
		v[0]++;
	}
}
