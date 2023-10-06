/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:06:32 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/06 10:02:49 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_sort_int_tab(char **tab, int size);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	int	i;

	argv = ft_sort_int_tab(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

char	**ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	j = 0;
	while (j < size - 1)
	{
		i = 1;
		while (i < size -1)
		{
			if ((ft_strcmp(tab[i], tab[i + 1])) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
	return (tab);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				return (1);
			}
			else
			{
				return (-1);
			}
		}
		i++;
	}
	if (s1[i] != s2[i])
	{
		return (-1);
	}
	return (0);
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
