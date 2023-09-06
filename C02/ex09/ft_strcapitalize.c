/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 06:15:53 by msaadidi          #+#    #+#             */
/*   Updated: 2023/08/20 01:55:55 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	ft_lowcase(str);
	new_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (new_word)
			{
				str[i] -= 32;
				new_word = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{	
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
