/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:02:35 by sokhacha          #+#    #+#             */
/*   Updated: 2022/02/23 13:47:40 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	sym;
	int	count;

	i = 0;
	num = 0;
	count = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sym = str[i] - '0';
		num = num * 10 + sym;
		i++;
	}
	if (count % 2 != 0)
		num *= -1;
	return (num);
}
