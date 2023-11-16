/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:11:55 by kneves            #+#    #+#             */
/*   Updated: 2023/08/11 11:37:49 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122)
			|| (str[i] >= 65 && str[i] <= 90))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "EScola";
	int	var;

	var = ft_str_is_alpha(str) + 48;
	write(1, &var, 1);
}*/
