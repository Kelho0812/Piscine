/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:40:13 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/11 09:47:51 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_give_memory(int size, char **strs, char *sep)
{
	char	*str;
	int		l;
	int		i;

	l = 0;
	i = 0;
	while (i < size)
		l += ft_strlen(strs[i++]);
	l += (ft_strlen(sep) * size - 1);
	if (size <= 0)
		l = 1;
	str = (char *)malloc(sizeof(char) * l);
	if (str == NULL)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = ft_give_memory(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			str[k++] = sep[j++];
	}
	str[k] = '\0';
	return (str);
}
