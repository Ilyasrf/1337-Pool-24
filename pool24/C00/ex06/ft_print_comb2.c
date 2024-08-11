/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:09:10 by irfei             #+#    #+#             */
/*   Updated: 2024/07/25 14:43:54 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(int num)
{
	ft_putchar(num / 10 + '0');
	ft_putchar(num % 10 + '0');
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_num(a);
			ft_putchar(' ');
			print_num(b);
			if (! (a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
