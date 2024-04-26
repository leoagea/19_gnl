/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:29:35 by lagea             #+#    #+#             */
/*   Updated: 2024/04/26 15:57:01 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <stddef.h> //NULL
#include <fcntl.h>  //open
#include <unistd.h> //read
#include <stdio.h>  //printf


#define BUFFER_SIZE 5

/* get_next_line */

char *ft_put_in_stash(char *buff, char *stash,int i);

/* get_next_line_utils */

int ft_is_backslah(char *str);
int ft_strlen(char* str);
int ft_strchr_index(char *str);
char *ft_strlcat(char *src,char *dst, int n);
char *ft_strlcpy(char *src, char *dst);
char *ft_substr(char *stash);

#endif
