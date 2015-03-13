/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 01:59:14 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/03/10 16:12:18 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int unittest1() {

	char	b1[100], b2[100];

	ft_memset(b1, 42, 100);
	memset(b2, 42, 100);
	if (memset(b1, 99, 0) != ft_memset(b1, 99, 0))
      return 0;
	if (memcmp(b1, b2, 100) != 0)
      return 0;
	b1[0] = 1;
	ft_memset(b1, 0, 0);
	return (b1[0] == 1);
}

static int unittest2() {

	return (memcmp(memset(strdup("abcd"), 'A', 5), ft_memset(strdup("abcd"), 'A', 5), 5) == 0);
}

static int unittest3() {

	return (memcmp(memset(strdup("abcd"), 0, 0), ft_memset(strdup("abcd"), 0, 0), 5) == 0);
}

int	ft_memsetVerif() {

   int res = 0;

	res += print(unittest1(), "test 1");
	res += print(unittest2(), "test 2");
	res += print(unittest3(), "test 3");

   return (res == 3);
}
