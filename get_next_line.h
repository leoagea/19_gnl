/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:47:33 by lagea             #+#    #+#             */
/*   Updated: 2024/03/30 01:59:55 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H
#define _GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h> //printf

char *get_next_line(int fd);

#endif