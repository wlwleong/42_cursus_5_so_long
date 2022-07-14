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

#include "so_long.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	**file;
	int		i;

	if (argc != 2)
	{
		printf("Invalid arguments\n");
		exit(EXIT_FAILURE);
	}
	file = ft_split(argv[1], '.');
	printf("Map name : %s\n", argv[1]);
	printf("File type : %s\n", file[1]);
	i = 0;
	while (file[i])
		free(file[i++]);
	free(file);
	return (0);
}
