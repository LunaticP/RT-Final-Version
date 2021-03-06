/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogarcia <jogarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 19:07:00 by jogarcia          #+#    #+#             */
/*   Updated: 2017/05/25 03:37:55 by jogarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt_bmp.h>
#include <rt.h>

int	*get_bmp(char *file)
{
	t_bitmap		*file_bmp;
	t_ubmp			*file_unc;
	int				*img;
	int				*size;

	file_bmp = ft_bitmap_file_load(file);
	if (file_bmp == NULL)
		exit_error("TEXTURE INVALIDE");
	file_unc = ft_bmp_to_ubmp(file_bmp);
	size = (int *)ft_memalloc(sizeof(int) * 3);
	size[0] = file_unc->size.x * file_unc->size.y + 3;
	size[1] = file_unc->size.x;
	size[2] = file_unc->size.y;
	img = (int *)memjoin((unsigned char *)size, (unsigned char *)file_unc->data,
		3 * sizeof(int), (size[0] - 3) * sizeof(int));
	return (img);
}
