/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:22:48 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/04 13:13:49 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		aux_atoi(char *str, int i);
int		count_minus(char *str, int *ptr);
void	skip_spaces(char *str, int *ptr);

int	ft_atoi(char *str)
{
	int	i;
	int	*ptr;
	int	minus_count;
	int	n;

	i = 0;
	n = 0;
	ptr = &i;
	skip_spaces(str, ptr);
	minus_count = count_minus(str, ptr);
	n = aux_atoi (str, i);
	if (minus_count % 2 != 0)
	{
		n = n * (-1);
		return (n);
	}
	return (n);
}

int	aux_atoi(char *str, int i)
{
	int	n;

	n = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		n = n * 10;
		n = n + (str[i] - '0');
		i++;
	}
	return (n);
}

int	count_minus(char *str, int *ptr)
{
	int	minus_count;
	int	i;

	i = *ptr;
	minus_count = 0;
	while (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
		{
			minus_count++;
		}
		i++;
	}
	*ptr = i;
	return (minus_count);
}

void	skip_spaces(char *str, int *ptr)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	*ptr = i;
}
