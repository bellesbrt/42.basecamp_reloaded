/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 04:11:44 by inicole-          #+#    #+#             */
/*   Updated: 2022/04/05 17:23:53 by inicole-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*ptr;

	if (min >= max)
		return (0);
	len = max - min;
	i = 0;
	ptr = (int *)malloc(sizeof(int) * len);
	if (!ptr)
		return (0);
	while (i < len)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
