/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:46:55 by sokhacha          #+#    #+#             */
/*   Updated: 2022/02/15 20:40:27 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_simbol(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0 && nb != -2147483648)
	{
		ft_simbol('-');
		nb *= -1;
	}	
	if (nb / 10 > 0)
	{
		ft_putnbr(nb / 10);
	}
	if (nb != -2147483648)
		ft_simbol(nb % 10 + '0');
}
