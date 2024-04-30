/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:29:14 by lagea             #+#    #+#             */
/*   Updated: 2024/04/30 16:28:12 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*stash[MAX_FD];
	char		*line;
	char		*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 /*|| read(fd, 0, 0) < 0*/)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	line = ft_fill_line_buffer(fd, stash[fd], buffer);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	stash[fd] = ft_set_line(line);
	return (line);
}

char	*ft_set_line(char *line_buffer)
{
	char	*line;
	ssize_t	i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
		return (NULL);
	line = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (!line)
	{
		free(line);
		line = NULL;
	}
	line_buffer[i + 1] = 0;
	return (line);
}

char	*ft_fill_line_buffer(int fd, char *stash, char *buffer)
{
	ssize_t	b_read;
	char	*tmp;

	b_read = 1;
	while (b_read > 0)
	{
		b_read = read(fd, buffer, BUFFER_SIZE);
		if (b_read == -1)
		{
			free(stash);
			return (NULL);
		}
		else if (b_read == 0)
			break ;
		buffer[b_read] = 0;
		if (!stash)
			stash = ft_strdup("");
		tmp = stash;
		stash = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr_index(buffer))
			break ;
	}
	return (stash);
}
// int main()
// {
//     // char *line;
//     int fd = open("./test.txt",O_RDONLY);
// 	while (1)
//     	printf("%s\n",get_next_line(fd));
// //    printf("%s\n",get_next_line(fd));
// //    printf("%s\n",get_next_line(fd));
// //    printf("%s\n",get_next_line(fd));
// //    printf("%s\n",get_next_line(fd));
// //    printf("%s\n",get_next_line(fd));
// //    printf("%s\n",get_next_line(fd));
// //    printf("%s\n",get_next_line(fd));
// //    printf("%s\n",get_next_line(fd));
// }
