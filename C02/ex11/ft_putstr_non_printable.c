/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 23:33:57 by msaadidi          #+#    #+#             */
/*   Updated: 2023/08/20 04:14:30 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char c[] = "0123456789abcdef";

	i = 0;
	while (str[i] != '\0')
	{
		if (is_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar(c[str[i] / 16]);
			ft_putchar(c[str[i] % 16]);
		}
		i++;
	}
}
