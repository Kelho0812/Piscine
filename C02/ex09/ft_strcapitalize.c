/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:53:51 by jorteixe          #+#    #+#             */
/*   Updated: 2023/08/29 11:33:38 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	normalize_string(char *str);
void	capitlz_4real(char *str);

char	*ft_strcapitalize(char *str)
{
	normalize_string(str);
	capitlz_4real(str);
	return (str);
}

void	normalize_string(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

void	capitlz_4real(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0 || str[i - 1] <= 47 || str[i - 1] >= 123)
			{
				str[i] = str[i] - 32;
			}
			else if (str[i - 1] >= 58 && str[i - 1] <= 64)
			{
				str[i] = str[i] - 32;
			}
			else if (str[i - 1] >= 91 && str[i - 1] <= 96)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
}
