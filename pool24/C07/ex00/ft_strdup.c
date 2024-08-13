/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:09:49 by irfei             #+#    #+#             */
/*   Updated: 2024/08/11 21:44:28 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i = 0;
	while (src[i])
	{
		i++;
	}
	char *dest;
	dest = malloc ((i + 1) * sizeof(char));
	if (dest == NULL)
	{
		return NULL;
	}
	int j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return dest;  	
}