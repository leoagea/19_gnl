/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:29:25 by lagea             #+#    #+#             */
/*   Updated: 2024/04/22 23:02:21 by lagea            ###   ########.fr       */
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

int ft_strchr_index(const char *str)
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

#include <stdio.h>

int main()
{
    char *s = "te\nst";

    printf("%d",ft_strrchr_index(s));
    return 0;
}
