/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 20:11:06 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/03/13 17:36:31 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int mt_test_isdigit(int tested_char) {
	return (ft_isdigit(tested_char) == isdigit(tested_char));
}

int   ft_isDigitVerif() {

   int res = 0;

   res += print(mt_test_isdigit('a'), "test 'a'");
   res += print(mt_test_isdigit('a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_isdigit('2'), "test '2'");
   res += print(mt_test_isdigit('Z'), "test 'Z'");
   res += print(mt_test_isdigit('t'), "test 't'");
   res += print(mt_test_isdigit(0), "test 0");
   res += print(mt_test_isdigit(1), "test 1");
   res += print(mt_test_isdigit(9999), "test 9999");
   res += print(mt_test_isdigit('1'), "test '1'");
   res += print(mt_test_isdigit('2'), "test '2'");
   res += print(mt_test_isdigit('A'), "test 'A'");
   res += print(mt_test_isdigit('Z'), "test 'Z'");
   res += print(mt_test_isdigit(' '), "test ' '");
   res += print(mt_test_isdigit('%'), "test '%'");
   res += print(mt_test_isdigit('\t'), "test '\t'");
   res += print(mt_test_isdigit('\n'), "test '\n'");
   res += print(mt_test_isdigit('\v'), "test '\v'");
   res += print(mt_test_isdigit('\b'), "test '\b'");
   res += print(mt_test_isdigit(7), "test 7");

   return (res == 19);
}
