/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndos-anj <ndos-anj@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:30:41 by ndos-anj          #+#    #+#             */
/*   Updated: 2021/06/17 15:50:47 by ndos-anj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	find_size;
	int	achei;

	i = 0;
	find_size = ft_strlen(to_find);
	achei = find_size;
	while (str[i] != '\0' && achei != 0)
	{
		achei = find_size;
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j] != '\0' && achei != 0)
		{
			achei--;
			j++;
		}
		i++;
	}
	if (i > 0)
		i--;
	if (achei == 0)
		return (str + i);
	else
		return (0);
}
