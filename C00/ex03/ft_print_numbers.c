/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:57:47 by jorteixe          #+#    #+#             */
/*   Updated: 2023/08/23 18:53:29 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	a_char;

	a_char = '0';
	while (a_char <= 57)
	{
		write(1, &a_char, 1);
		a_char++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }