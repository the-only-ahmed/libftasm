/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 20:11:24 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/24 20:11:26 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void mt_test_isascii(int tested_char) {
	return (ft_isascii(tested_char) == isascii(tested_char));
}

int ft_isAsciiVerif() {

   int res = 0;

   res += print(mt_test_isascii(num1, 'a'), "test 'a'");
   res += print(mt_test_isascii(num2, 'a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_isascii(num3, '2'), "test '2'");
   res += print(mt_test_isascii(num4, 'Z'), "test 'Z'");
   res += print(mt_test_isascii(num5, 't'), "test 't'");
   res += print(mt_test_isascii(num6, 0), "test 0");
   res += print(mt_test_isascii(num7, 1), "test 1");
   res += print(mt_test_isascii(num8, 9999), "test 9999");
   res += print(mt_test_isascii(num9, '1'), "test '1'");
   res += print(mt_test_isascii(num10, '2'), "test '2'");
   res += print(mt_test_isascii(num11, 'A'), "test 'A'");
   res += print(mt_test_isascii(num12, 'Z'), "test 'Z'");
   res += print(mt_test_isascii(num13, ' '), "test ' '");
   res += print(mt_test_isascii(num14, '%'), "test '%'");
   res += print(mt_test_isascii(num15, '\t'), "test '\t'");
   res += print(mt_test_isascii(num16, '\n'), "test '\n'");
   res += print(mt_test_isascii(num17, '\v'), "test '\v'");
   res += print(mt_test_isascii(num18, '\b'), "test '\b'");
   res += print(mt_test_isascii(num19, 7), "test 7");

   return (res == 19);
}
