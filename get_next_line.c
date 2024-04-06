/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:47:31 by lagea             #+#    #+#             */
/*   Updated: 2024/04/06 18:34:29 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	parse_buff_size(int fd, char **line)
{
	char	*buff;
	char	*line_buff;

	int char_return ;
	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	char_return = read(fd, buff, BUFFER_SIZE);
	if (char_return < 0)
	{
		if(*line != NULL)
		{
			free(*line);
			*line = NULL;
		}
		return (free(buff), char_return);
	}
	buff[char_return] = '\0';
	line_buff = ft_strjoin(*line, buff);
	free(buff);
	free(*line);
	*line = (char *)malloc((ft_strlen(line_buff) + 1) * sizeof(char));
	ft_strlcpy(*line, line_buff, ft_strlen(line_buff) + 1);
	printf("%s\n", *line);
	return (char_return);
}

int	main(void)
{
    char *test = "Test de is_backspace";

    printf("%d\n",is_backspace(test));

	char *path = "./test.txt";
	int files = 0;

	files = open(path, O_RDONLY);
	printf("%d\n", files);
	get_next_line(files);
}