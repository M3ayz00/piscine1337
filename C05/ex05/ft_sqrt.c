/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:54:31 by msaadidi          #+#    #+#             */
/*   Updated: 2023/09/02 16:09:50 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	root;
	long	n;

	n = nb;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	root = 2;
	if (n >= 2)
	{
		while (root * root <= n)
		{
			if (root * root == nb)
				return (root);
			root++;
		}
	}
	return (0);
}
