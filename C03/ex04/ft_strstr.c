/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 01:15:52 by msaadidi          #+#    #+#             */
/*   Updated: 2023/08/21 02:53:09 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = 0;
	while (to_find[size])
		size++;
	if (to_find[j] == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		if (j == size)
			return (&str[i - j +1]);
		i++;
	}
	return (0);
}
