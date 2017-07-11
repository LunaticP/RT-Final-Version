/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ml_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogarcia <jogarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 00:30:55 by jogarcia          #+#    #+#             */
/*   Updated: 2017/04/10 00:51:51 by jogarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mmlx.h"

void	ml_putstr_fd(char const *s, int fd)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}