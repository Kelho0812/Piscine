/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:00:08 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/06 10:01:03 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_char_tab(char *tab, int size);
void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	*argv = ft_rev_char_tab(*argv, argc - 1);
	while (argc > 1)
	{
		ft_putstr(argv[argc - 1]);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}

char	*ft_rev_char_tab(char *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	while (i < (size / 2))
	{
		j = size - i - 1;
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
	}
	return (tab);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
