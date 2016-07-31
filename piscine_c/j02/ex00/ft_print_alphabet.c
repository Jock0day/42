/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jock0day <philippe.cm_91@hotmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 14:24:41 by Jock0day          #+#    #+#             */
/*   Updated: 2016/07/31 14:30:24 by Jock0day         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int lettre;

	lettre = 'a';

	while (lettre >= 'z')
	{
		ft_putchar(lettre);
		lettre++;
	}
}
