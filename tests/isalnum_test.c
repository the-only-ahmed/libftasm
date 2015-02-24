/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 20:11:16 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/24 20:11:19 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int mt_test_isalnum(int tested_char) {

	mt_assert(ft_isalnum(tested_char) == isalnum(tested_char));
}

int ft_isAlNumVerif() {

   int res = 0;

   res += print(mt_test_isalnum(num1, 'a'), "test 'a'");
   res += print(mt_test_isalnum(num2, 'a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_isalnum(num3, '2'), "test '2'");
   res += print(mt_test_isalnum(num4, 'Z'), "test 'Z'");
   res += print(mt_test_isalnum(num5, 't'), "test 't'");
   res += print(mt_test_isalnum(num6, 0), "test 0");
   res += print(mt_test_isalnum(num7, 1), "test 1");
   res += print(mt_test_isalnum(num8, 9999), "test 9999");
   res += print(mt_test_isalnum(num9, '1'), "test '1'");
   res += print(mt_test_isalnum(num10, '2'), "test '2'");
   res += print(mt_test_isalnum(num11, 'A'), "test 'A'");
   res += print(mt_test_isalnum(num12, 'Z'), "test 'Z'");
   res += print(mt_test_isalnum(num13, ' '), "test ' '");
   res += print(mt_test_isalnum(num14, '%'), "test '%'");
   res += print(mt_test_isalnum(num15, '\t'), "test '\t'");
   res += print(mt_test_isalnum(num16, '\n'), "test '\n'");
   res += print(mt_test_isalnum(num17, '\v'), "test '\v'");
   res += print(mt_test_isalnum(num18, '\b'), "test '\b'");
   res += print(mt_test_isalnum(num19, 7), "test 7");

   return (res == 19);

}
