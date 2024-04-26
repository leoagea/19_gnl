/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:29:14 by lagea             #+#    #+#             */
/*   Updated: 2024/04/26 15:56:51 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    int i;
    char *stash;
    char *line;
    size_t read_return;
    static char buff[BUFFER_SIZE + 1];
    
    if (fd < 0)
        return NULL;
    i = 0;
    stash = NULL;
    read_return = read(fd, buff, BUFFER_SIZE);
    // printf("%zu\n",read_return);
    if (read_return == 0 || read_return == -1)
        return NULL;
    else 
    {
        // printf("%d\n",1);
        stash = (char *) malloc((3 + 1) * sizeof(char));
        stash = ft_strlcpy(buff,stash);
        while(ft_is_backslah(stash) == 0 && read_return != 0 && read_return != -1)
        {
            // printf("%d\n",2);
            // printf("stash : %s\n",stash);
            read_return = read(fd, buff, BUFFER_SIZE);
            stash = ft_put_in_stash(buff,stash,i);
            // printf("read retrun : %zu\n",read_return);
            i++;
        }
        line = ft_substr(stash);
        // printf("\nline final : %s",line);
        // printf("1");
    }
    return line;
}

// char *ft_put_end_of_line(char *buff, char *stash,int i)
// {

    
// }

char *ft_put_in_stash(char *buff, char *stash,int i)
{
    free(stash);
    stash = (char *) malloc(((i * 3) + 1) * sizeof(char));
    ft_strlcat(buff,stash,BUFFER_SIZE);
    // printf("i : %d\n",i);
    return stash;
}

int main()
{
    char *line;
    int fd = open("./test.txt",O_RDONLY);
    line = get_next_line(fd);
    printf("%s\n",line);
    free(line);
    line = get_next_line(fd);
    printf("%s\n",line);
    free(line);
    line = get_next_line(fd);
    printf("%s\n",line);
    free(line);
}

/*
Lire le fichier de buffer size (Buffer static)

si pas de \n dans le buff
applique strlcat de buffsize dans la stash

si le \n est dans le buff avec strchr
applique strlcat de n size dnas la stash

*/

/*  boucle while de read
malloc la stash de strlen(stash) + index
ou index est la valeur de retour de strchr
si pas de \n free le malloc
et recommence
*/