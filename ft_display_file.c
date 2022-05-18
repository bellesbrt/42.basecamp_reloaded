/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:31:45 by inicole-          #+#    #+#             */
/*   Updated: 2022/04/05 19:06:32 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	char	*name;
	char	file;
	int		i;

	if (argc <= 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	else if (argc >= 3)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	name = argv[1];
	i = open(name, O_RDONLY);
	while (read(i, &file, 1) != 0)
		write(1, &file, 1);
	close(i);
	return (0);
}
