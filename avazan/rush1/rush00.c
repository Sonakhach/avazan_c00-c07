/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:58:10 by sokhacha          #+#    #+#             */
/*   Updated: 2022/02/06 18:06:21 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	row ;
	int	column ;

	if (x < 1 || y < 1)
		return ;
	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((row == 1 || row == y) && (column > 1 && column < x))
				ft_putchar('-');
			else if ((column == 1 || column == x) && (row > 1 && row < y))
				ft_putchar('|');
			else if ((column > 1 && column < x) && (row > 1 || row < y))
				ft_putchar(' ');
			else
				ft_putchar('o');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}	
