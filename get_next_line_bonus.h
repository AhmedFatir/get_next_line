/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:30:40 by afatir            #+#    #+#             */
/*   Updated: 2022/11/22 18:36:10 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <limits.h>

size_t		ft_strlen(char *str);
size_t		ft_checkc(char *s, int c);
char		*ft_strjoin(char *s1, char *s2);
void		*ft_memcpy(void *dst, const void *src, size_t n);
char		*ft_strdup(char *s1);
char		*get_next_line(int fd);
char		*ft_read(int fd, char *str);
char		*ft_save(char *str);
char		*ft_get(char *str);

#endif