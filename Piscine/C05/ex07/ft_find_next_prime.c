/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:46:28 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/06 08:44:48 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
int	ft_sqrt(int nb);
int	aux_ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	if (ft_is_prime(nb) != 1)
	{
		return (ft_find_next_prime(nb + 1));
	}
	return (nb);
}

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
