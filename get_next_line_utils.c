/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <chonorat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:37:08 by chonorat          #+#    #+#             */
/*   Updated: 2023/01/26 17:16:24 by chonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(const char *s, int c)
{
	unsigned int	index;

	index = 0;
	while (s[index])
	{
		if (s[index] == (unsigned char)c)
			return (1);
		index++;
	}
	if (s[index] == (unsigned char)c)
		return (1);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	char_count;

	char_count = 0;
	while (s[char_count])
		char_count++;
	return (char_count);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new_str;
	unsigned int	index;
	unsigned int	index_j;

	index = 0;
	index_j = 0;
	if (!s1 || !s2)
		return (NULL);
	new_str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new_str)
		return (NULL);
	while (s1[index])
	{
		new_str[index] = s1[index];
		index++;
	}
	while (s2[index_j])
		new_str[index++] = s2[index_j++];
	new_str[index] = '\0';
	return (new_str);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			index;
	unsigned char	*unsigned_s;

	if (n == 0)
		return ;
	unsigned_s = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		unsigned_s[index] = '\0';
		index++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	pointer = malloc(count * size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, count * size);
	return (pointer);
}
