/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:16:52 by msaadidi          #+#    #+#             */
/*   Updated: 2023/08/29 21:26:50 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_full_length(int size, char **strs, int sep_length)
{
	int	i;
	int	f_len;

	i = 0;
	f_len = 0;
	while (i < size)
	{
		f_len += ft_strlen(strs[i]);
		f_len += sep_length;
		i++;
	}
	f_len -= sep_length;
	return (f_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		i;
	char	*full_str;
	char	*empty_str;

	empty_str = (char *)malloc(sizeof(char));
	*empty_str = '\0';
	if (size == 0)
		return (empty_str);
	full_len = ft_full_length(size, strs, ft_strlen(sep));
	full_str = (char *)malloc(sizeof(char) * (full_len + 1));
	i = 0;
	while (i < size)
	{
		ft_strcpy(full_str, strs[i]);
		full_str += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(full_str, sep);
			full_str += ft_strlen(sep);
		}
		i++;
	}
	*full_str = '\0';
	return (full_str - full_len);
}
