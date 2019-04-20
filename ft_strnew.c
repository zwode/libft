/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwode <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 20:28:37 by zwode             #+#    #+#             */
/*   Updated: 2019/04/20 20:31:09 by zwode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	s = (char*)malloc(size + 1);
	if (!s)
		return (NULL);
	if (size == 0)
		return (NULL);
	ft_memset((void*)s, (int)'\0', size + 1);
	return (s);
}
