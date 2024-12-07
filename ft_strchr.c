/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:18:01 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/07 18:36:23 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	char	*ptr_s;

	ptr_s = (char *)s;
	while (*ptr_s != '\0')
	{
		if (*ptr_s == c)
		{
			return (ptr_s);
		}
		ptr_s++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	s[10] = "Hola";
	int	c = 112;
	char	*ptr_occ = strchr(s, c);
	printf("%s", ptr_occ);
} */