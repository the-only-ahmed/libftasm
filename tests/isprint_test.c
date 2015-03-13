/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 20:11:32 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/03/10 16:12:51 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int mt_test_isprint(int tested_char) {
	return (ft_isprint(tested_char) == isprint(tested_char));
}

int ft_isPrintVerif() {

   int res = 0;

   res += print(mt_test_isprint('a'), "test 'a'");
   res += print(mt_test_isprint('a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_isprint('2'), "test '2'");
   res += print(mt_test_isprint('Z'), "test 'Z'");
   res += print(mt_test_isprint('t'), "test 't'");
   res += print(mt_test_isprint(0), "test 0");
   res += print(mt_test_isprint(1), "test 1");
   res += print(mt_test_isprint(9999), "test 9999");
   res += print(mt_test_isprint('1'), "test '1'");
   res += print(mt_test_isprint('2'), "test '2'");
   res += print(mt_test_isprint('A'), "test 'A'");
   res += print(mt_test_isprint('Z'), "test 'Z'");
   res += print(mt_test_isprint(' '), "test ' '");
   res += print(mt_test_isprint('%'), "test '%'");
   res += print(mt_test_isprint('\t'), "test '\t'");
   res += print(mt_test_isprint('\n'), "test '\n'");
   res += print(mt_test_isprint('\v'), "test '\v'");
   res += print(mt_test_isprint('\b'), "test '\b'");
   res += print(mt_test_isprint(7), "test 7");

   return (res == 19);
}
