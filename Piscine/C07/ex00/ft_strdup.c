/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:58:41 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/06 12:42:09 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = malloc(ft_strlen (src) + 1);
	if (dst == 0)
	{
		return (0);
	}
	ft_strcpy(dst, src); 
	return (dst);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++ ;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') 
	{
		i++;
	}
	return (i);
}
