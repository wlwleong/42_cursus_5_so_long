/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlow <wlow@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 21:10:30 by wlow              #+#    #+#             */
/*   Updated: 2021/08/05 09:24:23 by wlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void	*ft_memmove(void *dest, const void *src, size_t count);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *string);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *string);
int		ft_strncmp(const char *str1, const char *str2, size_t count);

#endif
