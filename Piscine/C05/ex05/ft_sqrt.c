/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:10:28 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/06 09:38:42 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	result;

	i = 1;
	result = 1;
	if (nb < 0 || nb > 2147395600)
	{
		return (0);
	}
	while (result < nb)
	{
		i++;
		result = i * i;
	}
	if (result == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
