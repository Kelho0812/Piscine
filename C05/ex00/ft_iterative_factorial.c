/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:29:07 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/06 09:25:43 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	if (nb < 0)
	{
		n = 0;
		return (n);
	}
	if (nb == 0)
	{
		n = 1;
		return (n);
	}
	while (i <= nb)
	{
		n = n * i;
		i++;
	}
	return (n);
}
