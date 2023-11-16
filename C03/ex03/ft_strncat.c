/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 08:57:46 by kneves            #+#    #+#             */
/*   Updated: 2023/08/13 09:41:33 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1[] = "Neymar";
	char	s2[] = "lindo Traira";

	printf("%s", ft_strncat(s1, s2, 5));

}*/
