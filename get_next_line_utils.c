/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:29:25 by lagea             #+#    #+#             */
/*   Updated: 2024/04/22 23:48:40 by lagea            ###   ########.fr       */
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

char *ft_strlcat(char *buff,char *stash, int n)
{
    int i;

    i = 0;
    while(*stash)
        stash++;
    while(i < n && *buff)
    {
        *stash++ = *buff++;
        i++;
    }
    *stash = '\0';
    return stash;
}


// int main()
// {
//     char stash[10] = "te\t";
//     char *buff = "st";

//     ft_strlcat(buff, stash, 2);
//     printf("%s",stash);
//     return 0;
// }
