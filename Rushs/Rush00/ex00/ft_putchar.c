/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:50:25 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/10 16:07:37 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char *str)
{
	write(1,str,ft_strlen(str));
}