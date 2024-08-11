/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:58:01 by irfei             #+#    #+#             */
/*   Updated: 2024/08/06 03:19:38 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*int main()
{
	char myString[] = "PARI PAPA PARI PARI";
	int length = ft_strlen(myString);
	printf("Length of the string \"%s\" is %d\n", myString, length);
	return 0;
}*/
