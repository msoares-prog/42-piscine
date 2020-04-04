/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:27:55 by msoares           #+#    #+#             */
/*   Updated: 2019/12/03 03:36:35 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		len;
	char	*ptr;

	len = 0;
	while (dest[len] != '\0')
	{
		len = len + 1;
	}
	ptr = dest + len;
	while (*src != '\0' && nb--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
