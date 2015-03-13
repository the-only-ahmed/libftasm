/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 18:58:31 by celegran          #+#    #+#             */
/*   Updated: 2015/03/13 17:00:12 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <assert.h>
#include <strings.h>
#include <stdlib.h>
#include <fcntl.h>
#include "libfts.h"

int	print(int res, char *str);

int	ft_bzeroVerif();
int   ft_strcatVerif();
int   ft_isAlphaVerif();
int   ft_isAlNumVerif();
int   ft_isAsciiVerif();
int   ft_isDigitVerif();
int   ft_isPrintVerif();
int   ft_tolowerVerif();
int   ft_toupperVerif();
int   ft_putsVerif();

int	ft_strlenVerif();
int	ft_strdupVerif();
int   ft_memsetVerif();
int	ft_memcpyVerif();

int   ft_catVerif(int ac, char **av);
#endif
