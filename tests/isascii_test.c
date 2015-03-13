/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 20:11:24 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/03/10 16:13:21 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int mt_test_isascii(int tested_char) {
	return (ft_isascii(tested_char) == isascii(tested_char));
}

int ft_isAsciiVerif() {

   int res = 0;

   res += print(mt_test_isascii('a'), "test 'a'");
   res += print(mt_test_isascii('a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_isascii('2'), "test '2'");
   res += print(mt_test_isascii('Z'), "test 'Z'");
   res += print(mt_test_isascii('t'), "test 't'");
   res += print(mt_test_isascii(0), "test 0");
   res += print(mt_test_isascii(1), "test 1");
   res += print(mt_test_isascii(9999), "test 9999");
   res += print(mt_test_isascii('1'), "test '1'");
   res += print(mt_test_isascii('2'), "test '2'");
   res += print(mt_test_isascii('A'), "test 'A'");
   res += print(mt_test_isascii('Z'), "test 'Z'");
   res += print(mt_test_isascii(' '), "test ' '");
   res += print(mt_test_isascii('%'), "test '%'");
   res += print(mt_test_isascii('\t'), "test '\t'");
   res += print(mt_test_isascii('\n'), "test '\n'");
   res += print(mt_test_isascii('\v'), "test '\v'");
   res += print(mt_test_isascii('\b'), "test '\b'");
   res += print(mt_test_isascii(7), "test 7");

   return (res == 19);
}
