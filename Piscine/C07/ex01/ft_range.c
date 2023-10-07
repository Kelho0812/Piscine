/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:02:09 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/07 12:03:04 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*teste;
	int	i;

	teste = malloc(sizeof (int) * (max - min));
	if (min >= max)
	{
		return (NULL);
	}
	i = 1;
	teste[0] = min;
	while (teste[i] < max)
	{
		teste[i] = teste[i - 1] + 1;
		i++;
	}
	return (teste);
}
