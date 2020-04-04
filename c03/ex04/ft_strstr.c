/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 19:32:00 by msoares           #+#    #+#             */
/*   Updated: 2019/12/04 03:28:18 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		len;

	len = 0;
	while (to_find[len])
	{
		len++;
	}
	if (len == 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j + 1 == len)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
