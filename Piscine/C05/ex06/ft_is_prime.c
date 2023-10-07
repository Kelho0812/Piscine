/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:24:59 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/05 16:58:16 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	aux_ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	if (nb < 2 || (nb % 2 == 0 && nb > 2))
	{
		return (0);
	}
	if (aux_ft_is_prime(nb) == 0)
	{
		return (0);
	}
	else if (aux_ft_is_prime(nb) == 1)
	{
		return (1);
	}
	return (1);
}

int	aux_ft_is_prime(int nb)
{
	int	i;

	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0 && i != nb)
		{
			return (0);
		}
		else if (nb % i == 0 && i == nb)
		{
			return (1);
		}
		i += 2;
	}
	return (1);
}
