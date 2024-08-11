/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:04:14 by irfei             #+#    #+#             */
/*   Updated: 2024/07/29 19:32:39 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*int    main()
{
	printf("%d", ft_str_is_lowercase(""));
	printf("\n%d", ft_str_is_lowercase("21389"));
    printf("\n%d", ft_str_is_lowercase("abcdefghijkl"));
    printf("\n%d", ft_str_is_lowercase("abc1defghijkl"));
    printf("\n%d", ft_str_is_lowercase("gfrygtuvHEt"));
}*/
