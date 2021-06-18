/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_in_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:46:53 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/09 21:13:26 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	buffer;
	int	loops;

	counter = 0;
	loops = size / 2;
	while (counter < loops)
	{
		buffer = tab[counter];
		tab[counter] = tab[size - counter - 1];
		tab[size - counter - 1] = buffer;
		counter++;
	}
}
