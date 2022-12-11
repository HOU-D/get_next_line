/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:56:11 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/12/11 18:07:06 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(char *s)
{
	int	i;

	i = 0;
	
	if(!s)
		return(0);
	while (s[i])
	{
		if (s[i] == 10)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*str;
	
	i = -1;
	j = 0;
	if (!s)
	{
		s = malloc(1);
		s[0] = '\0';
	}
	if (!buffer || !s || !buffer)
		return (NULL);
	str = malloc (sizeof(char) * ((ft_strlen(s) + ft_strlen(buffer)) + 1));
	if (!str)
		return (NULL);
	while (s[++i] != '\0')
			str[i] = s[i];
	while (buffer[j] != '\0')
		str[i++] = buffer[j++];
	str[i] = '\0';
	free(s);
	return (str);
}

size_t	ft_strlen(char *s)
{
	size_t	i;
	
	if(!s)
		return(0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}