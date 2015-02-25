/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 01:59:07 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/25 01:59:08 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void mt_test_strlen(int tested_str) {
	return (ft_strlen(tested_str) == strlen(tested_str));
}

static void test_10_million_chars_string() {

	int test_len = 10 * 1000 * 1000;
	char str[test_len];

	memset(str, 'a', test_len);
	str[test_len - 1] = '\0';
	return (ft_strlen(str) == strlen(str));
}

int	ft_strlenVerif() {

   int res = 0;

   res += print(mt_test_strlen(test1, "chat"), "test chat");
   res += print(mt_test_strlen(test2, ""), "test \"\"");
   res += print(mt_test_strlen(test3, "aaa\0aaa"), "test aaa\0aaa");
   res += print(test_10_million_chars_string(), "test 10 million chars string");

   return (res == 4);
}
