/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:46:54 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/12/11 17:38:04 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <fcntl.h>
# include<string.h>

char	*get_next_line(int fd);
int		ft_strchr(char *s);
char	*read_fd(int fd,  char *s);
char	*ft_strjoin(char *left_str, char *buff);
char	*check (char *s);
char	*next(char *s);
size_t	ft_strlen( char *s);
#endif
