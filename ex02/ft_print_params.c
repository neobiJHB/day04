/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neobi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 16:49:35 by neobi             #+#    #+#             */
/*   Updated: 2020/07/17 17:03:25 by neobi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power);
{
	int p = 1;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (p !=power)
		{
			nb *= nb;
			p++;
		}
		return(nb);
	}
}
