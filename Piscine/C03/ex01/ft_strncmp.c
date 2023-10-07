/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:01:38 by jorteixe          #+#    #+#             */
/*   Updated: 2023/09/02 16:29:37 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i <= n - 1 && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				return (1);
			}
			return (-1);
		}
		i++;
	}
	if (i <= n - 1 && s1[i] == '\0' && s1[i] != s2[i])
	{
		return (-1);
	}
	return (0);
}
