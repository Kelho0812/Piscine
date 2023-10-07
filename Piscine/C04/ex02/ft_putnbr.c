/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:37:32 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/04 14:19:39 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	char_nb;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2147483648", 10);
		return ;
	}
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb >= 0 && nb <= 9)
	{
		char_nb = nb + '0';
		write(1, &char_nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
