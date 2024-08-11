/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:34:06 by irfei             #+#    #+#             */
/*   Updated: 2024/07/29 19:40:51 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
	{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*int    main()
{
	printf("%d", ft_str_is_uppercase(""));
	printf("\n%d", ft_str_is_uppercase("21389"));
    printf("\n%d", ft_str_is_uppercase("abcdefghijkl"));
    printf("\n%d", ft_str_is_uppercase("abc1defghijkl"));
    printf("\n%d", ft_str_is_uppercase("ASDFGHJK"));
}*/
