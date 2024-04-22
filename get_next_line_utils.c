/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:29:25 by lagea             #+#    #+#             */
/*   Updated: 2024/04/22 22:48:34 by lagea            ###   ########.fr       */
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

#include <stdio.h>

int main()
{
    char *s = NULL;

    printf("%d",ft_strlen(s));
    return 0;
}
