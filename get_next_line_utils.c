/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:47:55 by lagea             #+#    #+#             */
/*   Updated: 2024/04/06 18:26:26 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int is_backspace(char *line) //test ok
{
    size_t index;

    index = 0;
    if (!line)
        return 0;
    while (line [index])
    {
        if(line [index] == '\n')
            return 1;
        index++;
    }
    return 0;
}

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strrchr(const char *str, int c)
{
	int	len;
    
    len = ft_strlen(str);
	while (len >= 0)
	{
		if (str [len] == (char) c)
			return (((char *)str + len));
		len--;
	}
	return (NULL);
}