/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 20:18:52 by zwode             #+#    #+#             */
/*   Updated: 2019/04/20 20:19:27 by zwode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*s;
	char	*find;
	size_t	size;

	s = (char *)s1;
	find = (char *)s2;
	size = ft_strlen(find);
	if (size == 0)
		return (char *)s;
	if (size > n)
		return (char *)NULL;
	while (n-- >= size && *s)
	{
		if (ft_strncmp(s, find, size) == 0)
			return (char *)s;
		s++;
	}
	return (char *)NULL;
}
