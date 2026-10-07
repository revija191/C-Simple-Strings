/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:55:16 by rlohitha          #+#    #+#             */
/*   Updated: 2026/09/23 16:33:46 by rlohitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_perform_hex_write(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	if (*str == '\0')
		return ;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= ' ' && *(str + i) <= '~')
			write (1, str + i, 1);
		else
			ft_perform_hex_write(*(str + i));
		i++;
	}
}

void	ft_perform_hex_write(char c)
{
	int		n;
	char	*hexstr;
	int		q;
	int		r;

	hexstr = "0123456789abcdef";
	n = c;
	q = n / 16 + 48;
	r = n % 16;
	write (1, "\\", 1);
	write (1, &q, 1);
	write (1, hexstr + r, 1);
}
