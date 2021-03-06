/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 20:15:42 by jogarcia          #+#    #+#             */
/*   Updated: 2015/11/30 21:48:20 by jogarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int x, int pow)
{
	if (pow < 0)
		return (1 / ft_pow(x, -pow));
	if (pow == 0)
		return (1);
	while (--pow)
	{
		x *= x;
	}
	return (x);
}
