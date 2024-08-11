/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:57:29 by irfei             #+#    #+#             */
/*   Updated: 2024/08/03 21:00:31 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main() {
    char dest[] = "Omae wa mou shindeirou";
    char src[] = " ,Naniiiiiii?!!!";

    printf("Before: %s\n", dest);
    ft_strcat(dest, src);
    printf("After: %s\n", dest);

    return 0;

}*/
