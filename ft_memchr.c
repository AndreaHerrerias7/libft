/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:58:44 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/07 19:26:25 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c_conv;
	const char	*s_conv;
	size_t	i;

	c_conv = (unsigned char)c;
	s_conv = s;
	i = 0;
	while(i != n)
	{
		if (*s_conv == c_conv)
			return ((void *)s_conv);
		i++;
		s_conv++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char	str[10] = "Hloa";
	char	*res;

	res = ft_memchr(str, 'o', 3);
	printf("%s", res);
} */