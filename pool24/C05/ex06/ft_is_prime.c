/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:36:01 by irfei             #+#    #+#             */
/*   Updated: 2024/08/07 23:03:44 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (nb > i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main()
// {
//     int nb = 8;
//     if (ft_is_prime(nb))
//      printf("%d is a prime\n", nb);
//     else 
//     printf("%d is not\n", nb); 
// }
