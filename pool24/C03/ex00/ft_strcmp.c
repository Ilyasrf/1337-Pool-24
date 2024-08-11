/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:21:01 by irfei             #+#    #+#             */
/*   Updated: 2024/08/04 16:35:59 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*int	main()
{
	char *s1;
	char *s2;
	s1 = "narutooo";
	s2 = "sasukeee";
	printf ("%d\n", ft_strcmp(s1, s2));
	s1 = "sasukeee";
    s2 = "narutooo";
    printf ("%d\n", ft_strcmp(s1, s2));
	s1 = "eran!";
	s2 = "eran!";
	printf ("%d\n", ft_strcmp(s1, s2));
	s1 = "";
	s2 = "";
	printf ("%d\n", ft_strcmp(s1, s2));

}*/
