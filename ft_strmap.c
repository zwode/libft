/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 20:34:23 by zwode             #+#    #+#             */
/*   Updated: 2019/04/20 20:35:25 by zwode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*r;
	int		i;
	int		j;

	if (!s || !f)
		return (NULL);
	if (s && f)
	{
		i = 0;
		j = ft_strlen(s);
		if (!(r = (char*)malloc((j + 1) * sizeof(r))))
			return (NULL);
		while (s[i] != '\0')
		{
			r[i] = f(s[i]);
			i++;
		}
		r[i] = '\0';
		return (r);
	}
	return (NULL);
}
