/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 20:11:06 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/24 20:11:08 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void mt_test_isdigit(int tested_char) {
	return (ft_isdigit(tested_char) == isdigit(tested_char));
}

int   ft_isAsciiVerif() {

   int res = 0;

   res += print(mt_test_isdigit(num1, 'a'), "test 'a'");
   res += print(mt_test_isdigit(num2, 'a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_isdigit(num3, '2'), "test '2'");
   res += print(mt_test_isdigit(num4, 'Z'), "test 'Z'");
   res += print(mt_test_isdigit(num5, 't'), "test 't'");
   res += print(mt_test_isdigit(num6, 0), "test 0");
   res += print(mt_test_isdigit(num7, 1), "test 1");
   res += print(mt_test_isdigit(num8, 9999), "test 9999");
   res += print(mt_test_isdigit(num9, '1'), "test '1'");
   res += print(mt_test_isdigit(num10, '2'), "test '2'");
   res += print(mt_test_isdigit(num11, 'A'), "test 'A'");
   res += print(mt_test_isdigit(num12, 'Z'), "test 'Z'");
   res += print(mt_test_isdigit(num13, ' '), "test ' '");
   res += print(mt_test_isdigit(num14, '%'), "test '%'");
   res += print(mt_test_isdigit(num15, '\t'), "test '\t'");
   res += print(mt_test_isdigit(num16, '\n'), "test '\n'");
   res += print(mt_test_isdigit(num17, '\v'), "test '\v'");
   res += print(mt_test_isdigit(num18, '\b'), "test '\b'");
   res += print(mt_test_isdigit(num19, 7), "test 7");

   return (res == 19);
}
