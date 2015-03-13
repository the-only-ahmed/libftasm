/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 01:59:07 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/03/10 16:15:14 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int mt_test_strlen(char *tested_str) {
	return (ft_strlen(tested_str) == strlen(tested_str));
}

static int test_5_million_chars_string() {

	int test_len = 5 * 1000 * 1000;
	char str[test_len];

	memset(str, 'a', test_len);
	str[test_len - 1] = '\0';
	return (ft_strlen(str) == strlen(str));
}

int	ft_strlenVerif() {

   int res = 0;

   res += print(mt_test_strlen("chat"), "test chat");
   res += print(mt_test_strlen(""), "test \"\"");
   res += print(mt_test_strlen("aaa\0aaa"), "test aaa\0aaa");
   res += print(test_5_million_chars_string(), "test 5 million chars string");

   return (res == 4);
}
