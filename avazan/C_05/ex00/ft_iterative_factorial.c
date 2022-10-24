/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:10:59 by sokhacha          #+#    #+#             */
/*   Updated: 2022/02/24 14:21:02 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 2;
	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
	{
		while (i < nb)
		{
			result = result * i;
			i++;
		}
	}
	return (result);
}
int	main()
{
	printf("%d", ft_iterative_factorial(1));
}
