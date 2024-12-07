/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:45:49 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/07 16:54:51 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	dest[10] = "AA";
	char	src[10] = "1ao123";
	void	*ptr;
	size_t n = 6;

	ptr = ft_memcpy(dest + 1, src, n);
	printf("%s", dest);
	
	int i = 0;
	char *ptr_a = (char *)ptr;
	while (i < 10)
	{
		printf("%c", *ptr_a);
		ptr_a++;
		i++;
	}
} */