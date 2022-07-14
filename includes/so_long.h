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

# include "../libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>
# define BUFFER_SIZE 42

typedef struct s_gnl
{
	char	read[BUFFER_SIZE];
	ssize_t	n_read;
	size_t	read_i;
	size_t	start_i;
	int		new_line;
}				t_gnl;

/*
get_next_line.c
*/
char	*get_next_line(int fd);

#endif