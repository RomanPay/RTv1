/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndremora <ndremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:19:09 by ndremora          #+#    #+#             */
/*   Updated: 2019/04/09 17:59:34 by ndremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float		ft_powf(float num, int pow)
{
	float	out;

	out = num;
	if (pow == 0)
		return (1);
	while (--pow)
		out *= num;
	return (out);
}
