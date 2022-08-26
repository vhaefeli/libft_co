/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 13:37:45 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/01/18 14:25:22 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strcut(const char *s1, int i)
{
	char	*copy;
	int		j;

	j = 0;
	copy = malloc(i + 1),
	if (!copy)
		return (NULL);
	while (j < i)
	{
		copy[j] = s1[j];
		j++;
	}
	copy[j] = '\0';
	free(s1);
	return (copy);
}
