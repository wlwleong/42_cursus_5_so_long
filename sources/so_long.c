/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwleong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:13:37 by wlwleong          #+#    #+#             */
/*   Updated: 2022/07/05 14:15:10 by wlwleong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include <stdio.h>

static int	ft_file_check(char *filename);
static int	ft_map_check(int fd);

int	main(int argc, char *argv[])
{
	int		fd;

	if (argc != 2)
	{
		printf("Invalid arguments!\n");
		exit(EXIT_FAILURE);
	}
	if (!ft_file_check(argv[1]))
	{
		printf("Invalid file type!\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		printf("Unable to open map!\n");
		exit(EXIT_FAILURE);
	}
	if (!ft_map_check(fd))
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}

static int	ft_map_check(int fd)
{
	char	*map;
	int		n_row;
	size_t	n_col;
	int		error_flag;

	n_row = 0;
	error_flag = 0;
	map = get_next_line(fd);
	n_col = ft_strlen(map);
	printf("map data:\n");
	while (map)
	{
		n_row++;
		if (ft_strlen(map) != n_col)
			error_flag = 1;
		printf("%s", map);
		free(map);
		map = get_next_line(fd);
	}
	printf("\n");
	free(map);
	if (n_row < 3)
	{
		printf("map row < 3\n");
		return (0);
	}
	else if (error_flag)
	{
		printf("inconsistent map width\n");
		return (0);
	}
	return (1);
}

static int	ft_file_check(char *filename)
{
	char	**split_filename;
	int		return_int;
	int		i;

	split_filename = ft_split(filename, '.');
	i = 0;
	while (split_filename[i])
		i++;
	if (ft_strncmp(split_filename[i - 1], "ber", 3) != 0)
		return_int = 0;
	else
		return_int = 1;
	i = 0;
	while (split_filename[i])
		free(split_filename[i++]);
	free(split_filename);
	return (return_int);
}
