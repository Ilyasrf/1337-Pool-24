/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:56:13 by irfei             #+#    #+#             */
/*   Updated: 2024/07/29 12:51:27 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}
/* int main()
{
	char src[] = "Hakuna Matata";
	char dest[42];

	ft_strcpy(dest, src);
	printf("copied string: %s\n",dest);
		return(0);
}*/
