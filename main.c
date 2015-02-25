/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 19:36:29 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/24 19:40:57 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	print(int res, char *str) {

	if (str != NULL)
		printf("%s ==> ", str);

	if (res)
		printf("\033[32mOK\033[0m\n");
   else
		printf("\033[31mERROR\033[0m\n");

	return res;
}

int main(int ac, char **av) {

	printf("* ------------------ PART 1 ------------------ *");

	print(ft_bzeroVerif(), "\033[36mft_bzero\33[33m");
	print(ft_strcatVerif(), "\033[36mft_strcat\33[33m");
	print(ft_isAlphaVerif(), "\033[36mft_isalpha\33[33m");
	print(ft_isAlNumVerif(), "\033[36mft_isalnum\33[33m");
	print(ft_isAsciiVerif(), "\033[36mft_isascii\33[33m");
	print(ft_isPrintVerif(), "\033[36mft_isprint\33[33m");
	print(ft_tolowerVerif(), "\033[36mft_tolower\33[33m");
	print(ft_toupperVerif(), "\033[36mft_toupper\33[33m");
	//print(ft_putsVerif(), "\033[36mft_puts\33[33m");

	printf("* ------------------ PART 2 ------------------ *");

	print(ft_strlenVerif(), "\033[36mft_strlen\33[33m");
	print(ft_strdupVerif(), "\033[36mft_strdup\33[33m");
	print(ft_memcpyVerif(), "\033[36mft_memcpy\33[33m");
	print(ft_memsetVerif(), "\033[36mft_memset\33[33m");

	printf("* ------------------ PART 3 ------------------ *");

	print(ft_catVerif(ac, av), "\033[36mft_cat\33[33m");

	return 0;
}
