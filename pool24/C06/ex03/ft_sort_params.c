/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:53:44 by irfei             #+#    #+#             */
/*   Updated: 2024/08/11 16:00:33 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write (1, &str[i++], 1);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			j = 1;
			while (j < ac - 1)
			{
				if (str_strcmp (av[j], av[j + 1]) > 0)
					ft_swap (&av[j], &av[j + 1]);
				j++;
			}
			i++;
		}
	}
	i = 1;
	while (av[i])
	{
		ft_putstr(av[i++]);
		write(1, "\n", 1);
	}
}
