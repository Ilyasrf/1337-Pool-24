/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:48:53 by irfei             #+#    #+#             */
/*   Updated: 2024/07/30 18:04:09 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[3];

	i = 0;
	while (str[i])
	{
		if (ft_char_is_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			hex[0] = "0123456789abcdef"[(unsigned char)str[i] / 16];
			hex[1] = "0123456789abcdef"[(unsigned char)str[i] % 16];
			hex[2] = '\0';
			ft_putchar('\\');
			write(1, hex, 2);
		}
		i++;
	}
}
/*int main()
{
	char test_str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(test_str);
    return 0;
}*/
