/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlohitha <rlohitha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:51:57 by rlohitha          #+#    #+#             */
/*   Updated: 2026/09/23 15:04:15 by rlohitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_capitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	if (*str == '\0')
		return (str);
	return (ft_capitalize(str));
}

char	*ft_capitalize(char *str)
{
	int		i;
	char	cp;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i != 0)
		{
			cp = *(str + (i - 1));
			if (((cp >= 'a' && cp <= 'z') || (cp >= 'A' && cp <= 'Z')
					|| (cp >= '0' && cp <= '9'))
				&& (*(str + i) >= 'A' && *(str + i) <= 'Z'))
				*(str + i) = *(str + i) + 32;
			else
				if (!((cp >= 'a' && cp <= 'z') || (cp >= 'A' && cp <= 'Z')
						|| (cp >= '0' && cp <= '9'))
					&& (*(str + i) >= 'a' && *(str + i) <= 'z'))
					*(str + i) = *(str + i) - 32;
		}
		else
			if (*(str + i) >= 'a' && *(str + i) <= 'z')
				*(str + i) = *(str + i) - 32;
		i++;
	}
	return (str);
}
