/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 07:15:47 by kneves            #+#    #+#             */
/*   Updated: 2023/08/13 09:40:45 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		i++;
		++c;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1[] = "I love";
	char	s2[] = " 42rio";

	printf("%s", ft_strcat(s1, s2));

}*/
