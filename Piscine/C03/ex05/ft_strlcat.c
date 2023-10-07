/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:09:50 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/02 17:20:14 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	offset;
	unsigned int	i;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	offset = d_len;
	i = 0;
	if (size <= d_len)
	{
		return (s_len + size);
	}
	while (i <= (size - d_len - 1) && src[i] != '\0')
	{
		dest[offset] = src[i];
		offset++;
		i++;
	}
	dest[offset] = '\0';
	return (d_len + s_len);
}

int	ft_strlen(char *str)
{
	int unsigned	i;

	i = 0;
	while (str[i] != '\0') 
	{
		i++;
	}
	return (i);
}
