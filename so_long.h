/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwleong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:15:25 by wlwleong          #+#    #+#             */
/*   Updated: 2022/07/05 14:17:37 by wlwleong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>
# define BUFFER_SIZE 42

/*
libft
*/
char	**ft_split(char const *s, char c);

/*
get_next_line.c
*/
char	*get_next_line(int fd);

#endif