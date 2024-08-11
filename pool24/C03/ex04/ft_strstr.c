/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:55:55 by irfei             #+#    #+#             */
/*   Updated: 2024/08/03 20:56:17 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j] == '\0')
				return (str + i);
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*int main() {
    char str[] = "o maywa mo chindayro";
    char to_find[] = "mo";
    char *result;

    result = ft_strstr(str, to_find);
    if (result != '\0') {
        printf("hahowa jbarto: %s\n", result);
    } else {
        printf("awalo amealem makaynx.\n");
    }

    return 0;
}*/
