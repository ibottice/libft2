/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibottice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:19:38 by ibottice          #+#    #+#             */
/*   Updated: 2024/12/21 17:45:03 by ibottice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_char_count(char const *str, char c, int i)
{
	int	len;

	len = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static void	*ft_free(char **strs)
{
	size_t	j;

	j = 0;
	while (strs[j])
	{
		free(strs[j]);
		j++;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**buffer;
	int		i;
	int		j;

	i = 0;
	j = 0;
	buffer = malloc(ft_count_word(s, c) + 1) sizeof(char *);
	if (!buffer)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && j < count_word(s, c))
		{
			buffer[j] = malloc(ft_char_count(s, c, i) + 1) * (sizeof(char));
			if (!buffer)
				return (ft_free(buffer));
			ft_strlcpy(buffer[j], &s[i], ft_char_count(s, c, i));
			j++;
			i += ft_char_count(s, c, i);
		}
		else
			i++;
	}
	buffer[j] = NULL;
	return (buffer);
}
