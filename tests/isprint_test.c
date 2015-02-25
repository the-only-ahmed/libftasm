/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 20:11:32 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/24 20:11:33 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void	mt_test_isprint(int tested_char) {
	return (ft_isprint(tested_char) == isprint(tested_char));
}

int ft_isPrintVerif() {

   int res = 0;

   res += print(mt_test_isprint(num1, 'a'), "test 'a'");
   res += print(mt_test_isprint(num2, 'a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_isprint(num3, '2'), "test '2'");
   res += print(mt_test_isprint(num4, 'Z'), "test 'Z'");
   res += print(mt_test_isprint(num5, 't'), "test 't'");
   res += print(mt_test_isprint(num6, 0), "test 0");
   res += print(mt_test_isprint(num7, 1), "test 1");
   res += print(mt_test_isprint(num8, 9999), "test 9999");
   res += print(mt_test_isprint(num9, '1'), "test '1'");
   res += print(mt_test_isprint(num10, '2'), "test '2'");
   res += print(mt_test_isprint(num11, 'A'), "test 'A'");
   res += print(mt_test_isprint(num12, 'Z'), "test 'Z'");
   res += print(mt_test_isprint(num13, ' '), "test ' '");
   res += print(mt_test_isprint(num14, '%'), "test '%'");
   res += print(mt_test_isprint(num15, '\t'), "test '\t'");
   res += print(mt_test_isprint(num16, '\n'), "test '\n'");
   res += print(mt_test_isprint(num17, '\v'), "test '\v'");
   res += print(mt_test_isprint(num18, '\b'), "test '\b'");
   res += print(mt_test_isprint(num19, 7), "test 7");

   return (res == 19);
}
