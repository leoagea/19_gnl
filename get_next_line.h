/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:29:35 by lagea             #+#    #+#             */
/*   Updated: 2024/04/30 20:47:20 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>  //open
# include <limits.h> //Macro INT_MAX
# include <stddef.h> //NULL
# include <stdlib.h> //free
# include <unistd.h> //read

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000000
# endif

/* get_next_line */
char	*get_next_line(int fd);
char	*ft_set_line(char *line_buffer);
char	*ft_fill_line_buffer(int fd, char *stash, char *buffer);

/* get_next_line_utils */
int		ft_strlen(const char *str);
char	*ft_strchr_index(char *str);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, int start, int len);

#endif
