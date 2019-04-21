/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 20:17:32 by zwode             #+#    #+#             */
/*   Updated: 2019/04/21 02:38:00 by zwode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s, const char *find)
{
	int	i;
	int	j;

	i = 0;
	if ((unsigned char)find[0] == '\0')
		return ((char*)s);
	while (s[i] != '\0')
	{
		j = 0;
		while (find[j] == s[i + j])
		{
			if (find[j + 1] == '\0')
			{
				return ((char*)(s + i));
			}
			j++;
		}
		i++;
	}
	return (0);
}
