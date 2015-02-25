/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 01:59:22 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/25 01:59:23 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void ft_memcpyVerif() {

	char	b1[100], b2[100];
   int res = 0;

	memset(b1, 33, 100);
	memset(b2, 63, 100);

	ft_memcpy(b1, b2, 100);
	res += print((memcmp(b1, b2, 100) == 0), "test 33/100");
	res += print((ft_memcpy(b1, b2, 0) == b1), "test 63/100");

   return (res == 2);
}
