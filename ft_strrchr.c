/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:38:57 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/07 18:41:25 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*ptr_s;
	char	*res;

	ptr_s = (char *)s;
	res = NULL;
	while (*ptr_s != '\0')
	{
		if (*ptr_s == c)
		{
			res = ptr_s;
		}
		ptr_s++;
	}
	return (res);
}

int	main(void)
{
	char	s[10] = "Holoa";
	int	c = 111;
	char	*ptr_occ = strrchr(s, c);
	printf("%s", ptr_occ);
}