/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:29:25 by lagea             #+#    #+#             */
/*   Updated: 2024/04/26 15:49:41 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_is_backslah(char *str)
{
    if(!str)
        return 0;
    while(*str)
    {
        if(*str == '\n')
            return 1;
        str++;
    }
    return 0;
}

int ft_strlen(char* str)
{
    int len;

    len = 0;
    if(!str)
        return 0;
    while (*str++)
    {
        len++;
    }
    return len;
}

int ft_strchr_index(char *str)
{
    int index;

    index = 0;
    if(!str)
        return 0;
    while(*str != '\n' && *str)
    {
        str++;
        index++;
    }
    return index + 1;
}

char *ft_strlcat(char *src,char *dst, int n)
{
    int i;

    i = 0;
    while(*dst)
        dst++;
    while(i < n && *src)
    {
        *dst++ = *src++;
        i++;
    }
    *dst = '\0';
    return dst;
}

char *ft_strlcpy(char *src, char *dst)
{
    int i;

    i = 0;
    while(src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}

char *ft_substr(char *stash)
{
    int i;
    int n;
    char *line;

    i = 0;
    n = 0;
    while(stash[i] != '\n' && stash [i])
        i++;
    line = (char *)malloc((i + 2) * sizeof(char));
    while (*stash && n <= i)
        line [n++] = *stash++;
    line[n] = '\0';
    return line;
}

// int main()
// {
//     char *buff = "testde\ngnlave\n";

//     printf("%s",ft_substr(buff));
//     printf("1\n");
//     return 0;
// }
