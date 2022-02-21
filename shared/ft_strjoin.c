/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoppy <hoppy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:18:34 by hoppy             #+#    #+#             */
/*   Updated: 2022/02/21 09:20:09 by hoppy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (s1[i] != '\0')
		i++;
	while (s2[++j] != '\0')
		s1[i + j] = s2[j];
	s1[i + j] = '\0';
	return (s1);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	char	*result;

	result = NULL;
	if (s1 && s2)
	{
		s1_size = ft_strlen(s1);
		s2_size = ft_strlen(s2);
		result = malloc(sizeof(char) * (s1_size + s2_size + 1));
		if (!result)
			return (NULL);
		ft_strcpy(result, s1);
		ft_strcat(result, s2);
	}
	return (result);
}
