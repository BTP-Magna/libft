/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thamahag <BTP_Magna@proton.me>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 00:26:32 by thamahag          #+#    #+#             */
/*   Updated: 2025/06/20 00:28:07 by thamahag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	s_cinset(const char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static char	*s_one_freeable_byte(void)
{
	char	*s_str;

	s_str = (char *)malloc(1);
	if (!s_str)
		return (NULL);
	*s_str = '\0';
	return (s_str);
}

/**
 * @brief Remove all characters in set from the beginning and end string
 *
 * @param s1
 * @param set
 * @return char* newly malloc’d trim string
 * @details Iterate to the start of non-set then iterate to the end of s1
 * and iterate back to the non-set word if it only set character return
 * freeable empty string/NULL (Undecide as of now) then malloc and get populate
 * the trim string and return it
 */
char	*ft_strtrim(const char *s1, const char *set)
{
	char		*t_ptr;
	char		*t_str;
	const char	*start;
	const char	*end;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (*start && s_cinset(*start, set))
		start++;
	if (*start == '\0')
		return (s_one_freeable_byte());
	end = start;
	while (*end)
		end++;
	while (s_cinset(*(--end), set))
		;
	t_str = malloc((end - start + 1) + 1);
	if (!t_str)
		return (NULL);
	t_ptr = t_str;
	while (start <= end)
		*t_ptr++ = *start++;
	*t_ptr = '\0';
	return (t_str);
}
/**
 * Understand
 * Malloc new string that trim out any character set front and back
 *
 * Step
 * Detect
 *
 * What if Edge case
 * If either s1 or set is NULL? return NULL?
 * If s1 is empty return empty
 * If set is empty return malloc dup of s1?
 * If it all set character not sure to return NULL or 1 freeable empty byte
 */
