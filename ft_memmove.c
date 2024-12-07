/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:19:18 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/07 16:55:22 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;
	char	*temp;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	while (i < n)
	{
		temp[i] = ptr_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = temp[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	a[10] = "12345678";
	//char	b[10] = "xao";
	void	*ptr;
	size_t n = 10;

	//printf("%s", a);
	ptr = ft_memmove(a + 3, a, n);
	printf("%s", a);
} */