/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:29:14 by lagea             #+#    #+#             */
/*   Updated: 2024/04/23 01:45:18 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    char *stash;
    static char buff[BUFFER_SIZE + 1];
    
    if (fd < 0)
        return NULL;
    if (read(fd, buff, BUFFER_SIZE) == 0)
        return NULL;
    // if (buff)
    //     return NULL; //buff pas vide = appelle func pour lire 2 eme ligne
    ft_strlcpy(buff,stash);
    printf("%s\n",stash);
    return NULL;
}

// char *ft_first_malloc_stash(char *buff, char *stash)
// {
//     int stop_buff;
    
//     stop_buff = ft_strchr_index(buff);
//     stash = (char *)malloc((stop_buff + 1) * sizeof(char));
//     ft_strlcpy(buff,stash);
//     return stash;
// }

// char *ft_malloc_stash(char *buff, char *stash)
// {
//     int stop_buff;
//     int len_stash;
    
//     stop_buff = ft_strchr_index(buff);
//     len_stash = ft_strlen(stash);
//     free(stash);
//     stash = (char *)malloc((len_stash + stop_buff + 1) * sizeof(char));
//     ft_strlcat(buff,stash,stop_buff);
//     return stash;
// }

int main()
{
    int fd = open("./test.txt",O_RDONLY);
    get_next_line(fd);
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