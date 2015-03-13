/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 20:11:16 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/03/10 16:13:32 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int mt_test_isalnum(int tested_char) {
	return (ft_isalnum(tested_char) == isalnum(tested_char));
}

int ft_isAlNumVerif() {

   int res = 0;

   res += print(mt_test_isalnum('a'), "test 'a'");
   res += print(mt_test_isalnum('a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_isalnum('2'), "test '2'");
   res += print(mt_test_isalnum('Z'), "test 'Z'");
   res += print(mt_test_isalnum('t'), "test 't'");
   res += print(mt_test_isalnum(0), "test 0");
   res += print(mt_test_isalnum(1), "test 1");
   res += print(mt_test_isalnum(9999), "test 9999");
   res += print(mt_test_isalnum('1'), "test '1'");
   res += print(mt_test_isalnum('2'), "test '2'");
   res += print(mt_test_isalnum('A'), "test 'A'");
   res += print(mt_test_isalnum('Z'), "test 'Z'");
   res += print(mt_test_isalnum(' '), "test ' '");
   res += print(mt_test_isalnum('%'), "test '%'");
   res += print(mt_test_isalnum('\t'), "test '\t'");
   res += print(mt_test_isalnum('\n'), "test '\n'");
   res += print(mt_test_isalnum('\v'), "test '\v'");
   res += print(mt_test_isalnum('\b'), "test '\b'");
   res += print(mt_test_isalnum(7), "test 7");

   return (res == 19);
}
