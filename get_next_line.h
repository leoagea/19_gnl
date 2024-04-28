/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:29:35 by lagea             #+#    #+#             */
/*   Updated: 2024/04/29 00:09:55 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <stddef.h> //NULL
#include <fcntl.h>  //open
#include <unistd.h> //read
#include <stdio.h>  //printf


# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

/* get_next_line_utils */
int ft_strlen(const char* str);
char *ft_strchr_index(char *str);
char *ft_strlcat(char *src,char *dst, int n);
char *ft_strlcpy(char *src, char *dst);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, unsigned int start, size_t len);

#endif