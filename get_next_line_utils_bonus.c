/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:52:30 by afatir            #+#    #+#             */
/*   Updated: 2022/11/20 22:52:30 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_checkc(char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t		str1;
	size_t		str2;
	char		*p;

	str1 = ft_strlen (s1);
	str2 = ft_strlen (s2);
	p = malloc(sizeof(char) * (str1 + str2) + 1);
	if (!p)
		return (0);
	ft_memcpy(p, s1, str1);
	ft_memcpy((p + str1), s2, str2);
	p[str1 + str2] = '\0';
	free(s1);
	return (p);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (0);
	if (src == dst)
		return (dst);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

char	*ft_strdup(char *s1)
{
	char	*f;
	int		n;
	int		i;

	n = ft_strlen(s1);
	f = malloc(sizeof(char) * (n + 1));
	if (!f)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		f[i] = s1[i];
		i++;
	}
	f[i] = '\0';
	return (f);
}
