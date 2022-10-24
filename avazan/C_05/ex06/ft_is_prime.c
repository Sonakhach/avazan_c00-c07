/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:00:24 by sokhacha          #+#    #+#             */
/*   Updated: 2022/02/24 21:37:05 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int	i;
	int count;
	if (nb <= 1)
		return (0);
	i = 2;
	count = 1;
	while (i <= nb)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count == 2)
		return (nb);
	return (0);
}
int main()
{
	printf("%d", ft_is_prime(2));
}
