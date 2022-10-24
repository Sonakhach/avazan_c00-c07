/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:59:02 by sokhacha          #+#    #+#             */
/*   Updated: 2022/02/23 19:38:30 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *nbase, int a)
{
	int	index;
	int	j;

	index = 0;
	j = 1;
	if (nbase[0] == '\0' || nbase[1] == '\0')
		return (1);
	while (nbase[index] != 0)
	{
		if (nbase[index] == '+' || nbase[index] == '-')
			return (1);
		while (nbase[index + j] != '\0')
		{
			if (nbase[index] == nbase[index + j])
				return (1);
			j++;
		}
		j = 1;
		index++;
	}
	if (a == 0)
		write(1, "0", 1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nbra;
	int			countbase;
	int			a[1000];
	int			i;

	countbase = 0;
	nbra = nbr;
	i = 0;
	if (check(base, nbr) == 1)
		return ;
	if (nbra < 0)
	{
		write(1, "-", 1);
		nbra *= -1;
	}
	while (base[countbase] != '\0')
		countbase++;
	while (nbra > 0)
	{
		a[i] = nbra % countbase;
		nbra = nbra / countbase;
		i++;
	}
	while (--i != -1)
		write(1, &base[a[i]], 1);
}
