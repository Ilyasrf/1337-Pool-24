/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:57:44 by irfei             #+#    #+#             */
/*   Updated: 2024/07/29 20:09:54 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*int    main()
{
	printf("%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("21389"));
    printf("\n%d", ft_str_is_printable("\n\t\v\f"));
    printf("\n%d", ft_str_is_printable("abc1defghijkl"));
    printf("\n%d", ft_str_is_printable("gfrygtuvHEt"));
}*/
