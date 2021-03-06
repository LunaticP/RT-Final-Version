/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deg_rad.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 16:10:44 by jogarcia          #+#    #+#             */
/*   Updated: 2017/05/15 16:10:46 by jogarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

float	rad(float deg)
{
	return (deg * (2.0f * M_PI) / 360.0f);
}

float	deg(float rad)
{
	return (rad * 360.0f / (2.0f * M_PI));
}
