/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 03:15:47 by capeinad          #+#    #+#             */
/*   Updated: 2025/08/31 22:55:11 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// intentando hacer un ejercico que tenía que ver con esto pero que no era esto, me salió
// esta función que permite alternar minúsculas y mayúsculas

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	whistle;

	i = 0;
	whistle = 1;
	while (str[i] != '\0')
	{
		if (whistle == 1 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] -32;
			whistle = 0;
			i++;
		}
		if (whistle == 1 && str[i] < '0' && str[i] > '9'
			|| str[i] >= 65 && str[i] <= 90)
		{
			whistle = 0;
			i++;
		}
		if (whistle == 0 && str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] +32;
			i++;
		}
		else
		{
			whistle = 1;
			i++;
		}
	}
	return (str);
}

#include <stdio.h>
int main(void)
{
	char str[] = "HeeeelLOOOO woRld 43str";
	printf("%s", (ft_strcapitalize(str)));
	return (0);
}
