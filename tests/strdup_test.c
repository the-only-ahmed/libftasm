/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 01:59:31 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/25 01:59:32 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void unittest1()
{
	return (strcmp(ft_strdup("aaaaa"), "aaaaa") == 0);
}

static void unittest2()
{
	return (strcmp(ft_strdup(""), "") == 0);
}

static void unittest3()
{
	char	*c;

	c = "AbC";
	return (c != ft_strdup(c));
}

void	ft_strdupVerif()
{
   int res = 0;

	res += print(unittest1(), "test 1");
	res += print(unittest2(), "test 2");
	res += print(unittest3(), "test 3");

   return (res == 3);
}
