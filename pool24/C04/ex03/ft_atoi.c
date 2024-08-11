/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:53:32 by irfei             #+#    #+#             */
/*   Updated: 2024/08/06 03:27:08 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sing;
	int	result;
	int	i;

	i = 0;
	sing = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sing * result);
}
/*int main()
{
	char str[] =" 	---+--+1234ab567";
	printf("Input: \"%s\" => Output: %d\n", str, ft_atoi(str));
}*/
