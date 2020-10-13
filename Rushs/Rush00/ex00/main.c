/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cbertola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:07:44 by cbertola          #+#    #+#             */
/*   Updated: 2020/10/10 16:13:51 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main() {
	
	ft_putchar("test : 123, 42\n");
    rush(123, 42);
	ft_putchar("test : 1, 1\n");
    rush(1, 1);
	ft_putchar("test : 2, 2\n");
    rush(2, 2);
	ft_putchar("test : 3, 10\n");
    rush(3, 10);
	ft_putchar("test : 10, 3\n");
    rush(10, 3);
	ft_putchar("test : 1, 10\n");
    rush(1, 10);
	ft_putchar("test : 10, 1\n");
    rush(10, 1);
	ft_putchar("test : 0, 0\n");
    rush(0, 0);
	return (0); 
}