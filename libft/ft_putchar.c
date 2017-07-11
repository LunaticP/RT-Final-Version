/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 21:35:38 by jogarcia          #+#    #+#             */
/*   Updated: 2015/11/30 21:35:42 by jogarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	unsigned char t;

	if (c < 0)
	{
		t = ((-c) + 128);
		write(1, &t, 1);
	}
	else
		write(1, &c, 1);
}