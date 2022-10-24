/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:00:04 by sokhacha          #+#    #+#             */
/*   Updated: 2022/02/10 16:41:24 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush01(int x, int y)
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
			if ((row == 1 && column == 1)
				|| (row == y && column == x && x>1 && y>1))
				ft_putchar('/');
			else if ((row == 1 && column == x) || (row == y && column == 1))
				ft_putchar('\\');
			else if ((row == 1 || row == y || column == 1 || column == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}	
