/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:37:39 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/07 20:13:26 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (j < size && i < sizeof(dst))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (ft_strlen(src) + ft_strlen(dst));
}

int	main(void)
{
	char	dest[10] = "0123456789";
	char	src[5] = "sajd";
	size_t 	size = 4;
	size_t	ret_dst;

	ret_dst = ft_strlcat(dest, src, size);
	printf("%s", dest);
}