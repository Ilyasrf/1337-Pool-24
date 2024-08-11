/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:37:13 by irfei             #+#    #+#             */
/*   Updated: 2024/07/29 19:01:44 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*int    main()
{
   printf("%d", ft_str_is_alpha(""));
	printf("\n%d", ft_str_is_alpha("abcdefghijkl"));
    printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
    printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
}*/
