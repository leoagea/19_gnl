/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:47:31 by lagea             #+#    #+#             */
/*   Updated: 2024/04/01 15:09:58 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

char	*get_next_line(int fd)
{
	char	*buff;
    char *line;

	buff = (char *) malloc ((BUFFER_SIZE + 1) * sizeof(char));
    read(fd,buff,BUFFER_SIZE);

    return (NULL);

}

int is_backspace(char *line) //test ok
{
    size_t index;

    index = 0;
    if (!line [index])
        return 0;
    while (line [index])
    {
        if(line [index] == '\n')
            return 1;
        index++;
    }
    return 0;
}

int	main(void)
{
    char *test = "Test de is_backspace";

    printf("%d\n",is_backspace(test));
	/*char *path = "./test.txt";
	int files = 0;

	files = open(path, O_RDONLY);
	printf("%d\n", files);
	get_next_line(files);*/
}