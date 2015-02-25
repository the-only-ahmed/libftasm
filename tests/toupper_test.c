/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 01:50:05 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/25 01:50:06 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void mt_test_toupper(int tested_char) {
	return (ft_toupper(tested_char) == toupper(tested_char));
}

int ft_toupperVerif() {

   int res = 0;

   res += print(mt_test_toupper(num1, 'a'), "test 'a'");
   res += print(mt_test_toupper(num2, 'a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_toupper(num3, '2'), "test '2'");
   res += print(mt_test_toupper(num4, 'Z'), "test 'Z'");
   res += print(mt_test_toupper(num5, 't'), "test 't'");
   res += print(mt_test_toupper(num6, 0), "test 0");
   res += print(mt_test_toupper(num7, 1), "test 1");
   res += print(mt_test_toupper(num8, 9999), "test 9999");
   res += print(mt_test_toupper(num9, '1'), "test '1'");
   res += print(mt_test_toupper(num10, '2'), "test '2'");
   res += print(mt_test_toupper(num11, 'A'), "test 'A'");
   res += print(mt_test_toupper(num12, 'Z'), "test 'Z'");
   res += print(mt_test_toupper(num13, ' '), "test ' '");
   res += print(mt_test_toupper(num14, '%'), "test '%'");
   res += print(mt_test_toupper(num15, '\t'), "test '\t'");
   res += print(mt_test_toupper(num16, '\n'), "test '\n'");
   res += print(mt_test_toupper(num17, '\v'), "test '\v'");
   res += print(mt_test_toupper(num18, '\b'), "test '\b'");
   res += print(mt_test_toupper(num19, 7), "test 7");

   return (res == 19);
}
