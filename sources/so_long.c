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

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Invalid arguments\n");
		exit(EXIT_FAILURE);
	}
	if (ft_file_check(argv[1]))
		printf("File type OK!\n");
	else
		printf("Invalid file type.\n");
	return (0);
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