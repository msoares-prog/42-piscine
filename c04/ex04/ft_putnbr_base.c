/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 13:03:33 by msoares           #+#    #+#             */
/*   Updated: 2019/12/05 19:11:32 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_base(int nbr, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size_base;

	size_base = 0;
	while (base[size_base] != '\0')
	{
		size_base = size_base + 1;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	else
	{
		if ((nbr / size_base) > 0)
		{
			ft_putnbr_base(nbr / size_base, base);
		}
		ft_putchar(nbr % size_base + 48);
	}
}
