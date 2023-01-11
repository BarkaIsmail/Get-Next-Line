/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:59:37 by isbarka           #+#    #+#             */
/*   Updated: 2022/11/13 10:56:56 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*new_s;
	int		i;

	i = 0;
	s_len = ft_strlen(s);
	new_s = malloc(s_len + 1);
	if (!new_s)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*t;

	i = 0;
	t = (unsigned char *)s;
	while (i < n)
	{
		t[i] = 0;
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*to_return;

	j = 0;
	i = 0;
	if (!s1)
		return (ft_strdup(s2));
	to_return = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!to_return)
		return (0);
	while (s1[i] != '\0')
	{
		to_return[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		to_return[i] = s2[j];
		i++;
		j++;
	}
	to_return[i] = '\0';
	free ((char *)s1);
	return (to_return);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (((char *)s + i + 1));
		i++;
	}
	if (c == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
