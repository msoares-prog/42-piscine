/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:22:41 by msoares           #+#    #+#             */
/*   Updated: 2019/12/10 18:42:18 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		count;

	if (power < 0)
	{
		return (0);
	}
	count = 1;
	i = 0;
	while (i < power)
	{
		count = count * nb;
		i++;
	}
	return (count);
}
