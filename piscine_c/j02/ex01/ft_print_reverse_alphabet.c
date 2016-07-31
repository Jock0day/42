/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jock0day <philippe.cm_91@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 14:39:12 by Jock0day          #+#    #+#             */
/*   Updated: 2016/07/31 14:47:03 by Jock0day         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int lettre;

	lettre = 'z';

	while (lettre <= 'a')
	{
		ft_putchar(lettre);
		lettre--;
	}
}
