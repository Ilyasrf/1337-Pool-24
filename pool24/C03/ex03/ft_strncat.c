/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:53:51 by irfei             #+#    #+#             */
/*   Updated: 2024/08/03 21:00:51 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
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
    ft_strncat(dest, src, 9);
    printf("After: %s\n", dest);

    return 0;

}*/
