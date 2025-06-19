/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 02:23:32 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/20 02:23:57 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	s_count_word(const char *s, char c)
{
	size_t	word;
	int		in_word;

	in_word = 0;
	word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			word++;
		}
		else if (*s == c && in_word)
			in_word = 0;
		s++;
	}
	return (word);
}

static char	*s_strdup(const char *s, char c)
{
	const char	*s_ptr;
	char		*new_s;
	char		*ptr;
	size_t		size;

	size = 0;
	s_ptr = s;
	while (*s_ptr && *s_ptr++ != c)
		size++;
	new_s = (char *)malloc(size + 1);
	if (!new_s)
		return (NULL);
	ptr = new_s;
	s_ptr = s;
	while (size-- > 0)
		*ptr++ = *s++;
	*ptr = '\0';
	return (new_s);
}

static char	**s_free_array(char **array)
{
	char	**ptr;

	ptr = array;
	while (*ptr)
		free(*ptr++);
	free(array);
	return (NULL);
}

/**
 * @brief Split string with delimitor into array of string
 *
 * @param s
 * @param c
 * @return char**
 * @details Check if input s is NULL, count and allocate array of pointer to fit
 * split words + 1 NULL stopper, then iterate through s and malloc each split
 * into an array
 */
char	**ft_split(const char *s, char c)
{
	char		**array;
	char		**a_ptr;
	const char	*s_ptr;

	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * (s_count_word(s, c) + 1));
	if (!array)
		return (NULL);
	a_ptr = array;
	s_ptr = s;
	while (*s_ptr)
	{
		while (*s_ptr == c)
			s_ptr++;
		if (*s_ptr == '\0')
			break ;
		*a_ptr = s_strdup(s_ptr, c);
		if (*a_ptr++ == NULL)
			return (s_free_array(array));
		while (*s_ptr != c && *s_ptr)
			s_ptr++;
	}
	*a_ptr = NULL;
	return (array);
}
/**
 * Understand
 * Split string into array of string by using c as delimitor
 *
 *
 * What if Edge case
 * If s is null return NULL
 * If s is empty return an char array pointer point to NULL
 */
