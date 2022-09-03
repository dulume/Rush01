/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragrana <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:27:28 by ragrana           #+#    #+#             */
/*   Updated: 2022/09/03 13:38:50 by ragrana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = x - 2;
	j = y;
	if(i > 0)
		ft_putchar('\\');

	ft_putchar('*');
	rush(i - 1, y);
}

int	main(void)
{
	rush(5, 3);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
