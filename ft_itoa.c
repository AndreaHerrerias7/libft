/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:16:46 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/17 17:27:49 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int	length;

	length = 0;
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

void	ft_save_number(char * str, char v)
{
	int	i;

	i = 0;
	str[i] = v;
	i++;
}

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_length(n) + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		ft_save_number(str, '-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	else
	{
		ft_save_number(str, n + '0');
	}
}

int	main(void)
{
	char *str = ft_itoa(120333);
}
