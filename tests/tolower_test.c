/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 01:49:56 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/03/10 16:11:36 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int mt_test_tolower(int tested_char) {
	return (ft_tolower(tested_char) == tolower(tested_char));
}

int ft_tolowerVerif() {

   int res = 0;

   res += print(mt_test_tolower('a'), "test 'a'");
   res += print(mt_test_tolower('a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_tolower('2'), "test '2'");
   res += print(mt_test_tolower('Z'), "test 'Z'");
   res += print(mt_test_tolower('t'), "test 't'");
   res += print(mt_test_tolower(0), "test 0");
   res += print(mt_test_tolower(1), "test 1");
   res += print(mt_test_tolower(9999), "test 9999");
   res += print(mt_test_tolower('1'), "test '1'");
   res += print(mt_test_tolower('2'), "test '2'");
   res += print(mt_test_tolower('A'), "test 'A'");
   res += print(mt_test_tolower('Z'), "test 'Z'");
   res += print(mt_test_tolower(' '), "test ' '");
   res += print(mt_test_tolower('%'), "test '%'");
   res += print(mt_test_tolower('\t'), "test '\t'");
   res += print(mt_test_tolower('\n'), "test '\n'");
   res += print(mt_test_tolower('\v'), "test '\v'");
   res += print(mt_test_tolower('\b'), "test '\b'");
   res += print(mt_test_tolower(7), "test 7");

   return (res == 19);
}
