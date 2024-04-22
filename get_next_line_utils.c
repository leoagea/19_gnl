/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:29:25 by lagea             #+#    #+#             */
/*   Updated: 2024/04/23 01:13:30 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(const char* str)
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


// int main()
// {
//     char *stash;
//     char *buff = "test!";

//     stash = (char *) malloc (sizeof(char) * (BUFFER_SIZE + 1));
//     ft_strlcpy(buff, stash, BUFFER_SIZE);
//     printf("%s",stash);
//     return 0;
// }
