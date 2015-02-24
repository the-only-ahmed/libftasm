/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 17:15:18 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/24 19:43:41 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

/* ------------------------ FT_BZERO ------------------------ */

static int simple_string() {

	char	control[10];
	char	subject[] = "123456789";

	bzero(control, 10);
	ft_bzero(subject, 10);
	if (!(memcmp(control, subject, 10) == 0))
		return 0;
	subject[0] = 'a';
	ft_bzero(subject, 0);
	return (subject[0] == 'a');
}

static int test_only_bzero_first_x_chars() {

	char	control[] = "123456789";
	char	subject[] = "123456789";

	int random = rand() % 9;

	bzero(control, random);
	ft_bzero(subject, random);
	return (memcmp(subject, control, 10) == 0);
}

/* ------------------------ MAIN ------------------------ */

int ft_bzeroVerif() {

	int res1 = simple_string();
	int res2 = test_only_bzero_first_x_chars();

	print(res1, "ft_bzero simple string test");
	print(res2, "ft_bzero test only first (randomized)x chars");

   return (res1 == res2);
}
