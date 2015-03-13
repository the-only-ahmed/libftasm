/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 19:52:11 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/24 19:52:16 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int mt_test_isalpha(int tested_char) {
	return (ft_isalpha(tested_char) == isalpha(tested_char));
}

int ft_isAlphaVerif() {

   int res = 0;

   res += print(mt_test_isalpha('a'), "test 'a'");
   res += print(mt_test_isalpha('a' + 0x100), "test 'a' + 0x100");
   res += print(mt_test_isalpha('2'), "test '2'");
   res += print(mt_test_isalpha('Z'), "test 'Z'");
   res += print(mt_test_isalpha('t'), "test 't'");
   res += print(mt_test_isalpha(0), "test 0");
   res += print(mt_test_isalpha(1), "test 1");
   res += print(mt_test_isalpha(9999), "test 9999");
   res += print(mt_test_isalpha('1'), "test '1'");
   res += print(mt_test_isalpha('2'), "test '2'");
   res += print(mt_test_isalpha('A'), "test 'A'");
   res += print(mt_test_isalpha('Z'), "test 'Z'");
   res += print(mt_test_isalpha(' '), "test ' '");
   res += print(mt_test_isalpha('%'), "test '%'");
   res += print(mt_test_isalpha('\t'), "test '\t'");
   res += print(mt_test_isalpha('\n'), "test '\n'");
   res += print(mt_test_isalpha('\v'), "test '\v'");
   res += print(mt_test_isalpha('\b'), "test '\b'");
   res += print(mt_test_isalpha(7), "test 7");

   return (res == 19);
}
