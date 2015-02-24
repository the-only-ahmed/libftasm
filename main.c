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

int main() {

	print(ft_bzeroVerif(), "\033[36mft_bzero\33[33m");
	print(ft_strcatVerif(), "\033[36mft_strcat\33[33m");
	print(ft_isAlphaVerif(), "\033[36mft_isalpha\33[33m");
	print(ft_isAlNumVerif(), "\033[36mft_isalnum\33[33m");

	print(ft_strcatVerif(), "\033[36mft_strcat\33[33m");
	print(ft_strcatVerif(), "\033[36mft_strcat\33[33m");
	print(ft_strcatVerif(), "\033[36mft_strcat\33[33m");
	return 0;
}
