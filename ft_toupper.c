/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherreri <aherreri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:09:15 by aherreri          #+#    #+#             */
/*   Updated: 2024/12/07 18:35:00 by aherreri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 97 + 65;
	return (c);
}

/* int	main(void)
{
	int a = toupper(97);
	printf("%i", a);
} */