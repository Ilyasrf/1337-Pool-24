/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:09:09 by irfei             #+#    #+#             */
/*   Updated: 2024/07/29 18:55:50 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (! (str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*int    main()
{
	printf("%d", ft_str_is_numeric(""));
	printf("\n%d", ft_str_is_numeric("21389"));
    printf("\n%d", ft_str_is_numeric("abcdefghijkl"));
    printf("\n%d", ft_str_is_numeric("abc1defghijkl"));
    printf("\n%d", ft_str_is_numeric("-_134556efghij67"));
}*/
