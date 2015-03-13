/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 01:50:05 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/03/10 16:11:24 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int mt_test_toupper(int tested_char) {
	return (ft_toupper(tested_char) == toupper(tested_char));
}

int		ft_toupperVerif() {

   int res = 0;

   res += print(mt_test_toupper('a'), "test 'a'");
   res += print(mt_test_toupper('a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_toupper('2'), "test '2'");
   res += print(mt_test_toupper('Z'), "test 'Z'");
   res += print(mt_test_toupper('t'), "test 't'");
   res += print(mt_test_toupper(0), "test 0");
   res += print(mt_test_toupper(1), "test 1");
   res += print(mt_test_toupper(9999), "test 9999");
   res += print(mt_test_toupper('1'), "test '1'");
   res += print(mt_test_toupper('2'), "test '2'");
   res += print(mt_test_toupper('A'), "test 'A'");
   res += print(mt_test_toupper('Z'), "test 'Z'");
   res += print(mt_test_toupper(' '), "test ' '");
   res += print(mt_test_toupper('%'), "test '%'");
   res += print(mt_test_toupper('\t'), "test '\t'");
   res += print(mt_test_toupper('\n'), "test '\n'");
   res += print(mt_test_toupper('\v'), "test '\v'");
   res += print(mt_test_toupper('\b'), "test '\b'");
   res += print(mt_test_toupper(7), "test 7");

   return (res == 19);
}
