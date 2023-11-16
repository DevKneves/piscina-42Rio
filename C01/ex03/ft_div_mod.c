/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:41:42 by kneves            #+#    #+#             */
/*   Updated: 2023/08/05 20:46:41 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 8;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	div = div + '0';
	mod = mod + '0';
	write(1, &div, 1);
	write(1, " ", 1);
	write(1, &mod, 1);


}*/
