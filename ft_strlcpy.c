/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:00:05 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/07 18:28:47 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

/* int	main(void)
{
	char	dest[10] = "eeee";
	char	src[5] = "miau";
	size_t 	size = 5;
	size_t	ret_dst;

	ret_dst = ft_strlcpy(dest, src, size);
	printf("%s", dest);
} */