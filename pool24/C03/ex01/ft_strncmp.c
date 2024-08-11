/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:31:49 by irfei             #+#    #+#             */
/*   Updated: 2024/08/04 18:16:56 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*int	main()
{
	
	char *s1;
	char *s2;
	s1 = "narutooo";
	s2 = "nasukeee";
	printf ("%d\n", ft_strncmp(s1, s2, 3));
	s1 = "sasukeee";
    s2 = "sasutooo";
    printf ("%d\n", ft_strncmp(s1, s2, 3));
	s1 = "eran!";
	s2 = "eran!";
	printf ("%d\n", ft_strncmp(s1, s2, 1));
	s1 = "";
	s2 = "";
	printf ("%d\n", ft_strncmp(s1, s2, 7));

}*/
