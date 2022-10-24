/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:01:14 by sokhacha          #+#    #+#             */
/*   Updated: 2022/02/06 18:01:52 by sokhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush02(int x, int y)
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
			if ((row == 1 && column == 1) || (row == 1 && column == x))
				ft_putchar('A');
			else if ((row == y && column == 1) || (row == y && column == x))
				ft_putchar('C');
			else if ((row == 1 || row == y || column == 1 || column == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}	
