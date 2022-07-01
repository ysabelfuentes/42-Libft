/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:19:52 by yfuentes          #+#    #+#             */
/*   Updated: 2022/07/01 13:19:16 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char c;
	size_t pos;
	char **res;
	char t[] = "  split this   for    me ! ";
	c = ' ';
	pos = 0;
	res = ft_split(t, c);
	while (pos <= ft_count_cad(t, c))
	{
		printf("posicion: (%zu) = substring: %s\n", pos, res[pos]);
		pos++;
	}
	free(res);
	return (0);
}
