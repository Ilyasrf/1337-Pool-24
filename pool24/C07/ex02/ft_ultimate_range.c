/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:40:13 by irfei             #+#    #+#             */
/*   Updated: 2024/08/13 23:40:14 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	i = 0;
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
		return (-1);
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (size);
}