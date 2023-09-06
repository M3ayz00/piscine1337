/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 03:00:01 by msaadidi          #+#    #+#             */
/*   Updated: 2023/08/23 09:20:44 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	double_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	putnb(int nb, char *symbols, int bVal)
{
	long	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= bVal)
		putnb(nb / bVal, symbols, bVal);
	ft_putchar(symbols[nb % bVal]);
}	

void	ft_putnbr_base(int nbr, char *base)
{
	int	bsym;

	bsym = 0;
	while (base[bsym])
	{
		if (base[bsym] == '-' || base[bsym] == '+')
			return ;
		bsym++;
	}
	if (bsym < 2)
		return ;
	if (double_base(base))
		return ;
	putnb(nbr, base, bsym);
}
