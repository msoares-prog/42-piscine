/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 23:00:38 by msoares           #+#    #+#             */
/*   Updated: 2019/12/11 05:28:50 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb);

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	while (i < 46341)
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int		ft_is_prime(int nb)
{
	int		i;
	int		prime;

	i = 2;
	prime = 1;
	if (nb <= 1)
	{
		prime = 0;
	}
	while (prime == 1 && i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
		{
			prime = 0;
		}
		i++;
	}
	return (prime);
}

int		ft_find_next_prime(int nb)
{
	if (nb != 2147483647)
	{
		while (nb < 2147483647)
		{
			if (ft_is_prime(nb))
				return (nb);
			else
				nb = nb + 1;
		}
	}
	return (nb);
}
