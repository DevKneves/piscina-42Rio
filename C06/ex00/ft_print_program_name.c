/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:52:49 by kneves            #+#    #+#             */
/*   Updated: 2023/10/16 08:13:51 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int i, char **argv)
{	
	i = 0;
	if (argv[0])
	{
		write(1, "c", 1);
	}
	write(1, "\n", 1);
	}
