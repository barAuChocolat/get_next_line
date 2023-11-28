/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:35:52 by bbonnet           #+#    #+#             */
/*   Updated: 2023/11/28 14:09:31 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, unsigned int size);
void	*ft_memmove(void *destination, const void *source, size_t num);
char	*ft_realloc_str(char *str, size_t new_size);
char	*get_next_line(int fd);

#endif
