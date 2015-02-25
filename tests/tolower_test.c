/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 01:49:56 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/25 01:49:58 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void mt_test_tolower(int tested_char) {
	return (ft_tolower(tested_char) == tolower(tested_char));
}

int ft_tolowerVerif() {

   int res = 0;

   res += print(mt_test_tolower(num1, 'a'), "test 'a'");
   res += print(mt_test_tolower(num2, 'a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_tolower(num3, '2'), "test '2'");
   res += print(mt_test_tolower(num4, 'Z'), "test 'Z'");
   res += print(mt_test_tolower(num5, 't'), "test 't'");
   res += print(mt_test_tolower(num6, 0), "test 0");
   res += print(mt_test_tolower(num7, 1), "test 1");
   res += print(mt_test_tolower(num8, 9999), "test 9999");
   res += print(mt_test_tolower(num9, '1'), "test '1'");
   res += print(mt_test_tolower(num10, '2'), "test '2'");
   res += print(mt_test_tolower(num11, 'A'), "test 'A'");
   res += print(mt_test_tolower(num12, 'Z'), "test 'Z'");
   res += print(mt_test_tolower(num13, ' '), "test ' '");
   res += print(mt_test_tolower(num14, '%'), "test '%'");
   res += print(mt_test_tolower(num15, '\t'), "test '\t'");
   res += print(mt_test_tolower(num16, '\n'), "test '\n'");
   res += print(mt_test_tolower(num17, '\v'), "test '\v'");
   res += print(mt_test_tolower(num18, '\b'), "test '\b'");
   res += print(mt_test_tolower(num19, 7), "test 7");

   return (res == 19);
}
