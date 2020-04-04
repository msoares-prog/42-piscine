/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 01:02:28 by msoares           #+#    #+#             */
/*   Updated: 2019/11/24 19:32:36 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_putchar(char i)
{
	write(1, &i, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		n = 'P';
		ft_putchar(n);
	}
	else
	{
		n = 'N';
		ft_putchar(n);
	}
}
