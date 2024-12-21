/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibottice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:28:22 by ibottice          #+#    #+#             */
/*   Updated: 2024/12/15 17:28:07 by ibottice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*cd;

	i = 0;
	cc = (char) c;
	cd = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			cd = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		cd = (char *) &s[i];
	return (cd);
}
