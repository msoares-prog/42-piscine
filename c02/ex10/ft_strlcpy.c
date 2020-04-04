/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 12:37:20 by msoares           #+#    #+#             */
/*   Updated: 2019/12/02 23:44:36 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int i;
	unsigned	int j;

	i = 0;
	while (src[i] != '\0')
	{
		++i;
	}
	j = 0;
	while (src[j] != '\0' && j < size - 1)
	{
		dest[j] = src[j];
		++j;
	}
	dest[j] = '\0';
	return (i);
}
