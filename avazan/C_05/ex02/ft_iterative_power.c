/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:04:56 by sokhacha          #+#    #+#             */
/*   Updated: 2022/02/24 15:52:44 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
		return (1);
	if (nb != 0 && power > 0)
	{
		while (i < power)
		{
			result = result * nb;
			i++;
		}
	}
	return (result);
}
int main()
{
	printf("%d",ft_iterative_power(0,0 ));
}
