/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 21:48:36 by irfei             #+#    #+#             */
/*   Updated: 2024/07/30 13:34:33 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	bool1;
	int	bool2;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z') 
			str[i] = str[i] + 32;
		bool1 = !((str[i - 1] >= '0' && str[i - 1] <= '9') 
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z') 
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z'));
		bool2 = str[i] >= 'a' && str[i] <= 'z';
		if (bool1 && bool2)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*/int main()
{
   char str[] = "ILYAS ilyas 77Ilyas -q !f";
   char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
   printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
}*/
