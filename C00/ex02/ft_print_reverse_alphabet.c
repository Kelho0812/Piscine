/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:57:47 by jorteixe          #+#    #+#             */
/*   Updated: 2023/08/23 18:50:41 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a_char;

	a_char = 'z';
	while (a_char >= 97)
	{
		write(1, &a_char, 1);
		a_char--;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }