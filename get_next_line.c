/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:47:31 by lagea             #+#    #+#             */
/*   Updated: 2024/03/30 02:09:57 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

char *get_next_line(int fd)
{
    char buff[1000];
    int files = 0;
    files = read(fd,buff,1000);
    printf("%d\n",files);
    return NULL;
}

int main()
{
    char *path = "./test.txt";
    int files = 0;

    files = open(path,O_RDONLY);
    printf("%d\n",files);
    get_next_line(files);
}