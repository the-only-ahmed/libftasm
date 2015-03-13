/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 19:36:16 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/24 19:36:17 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int ft_strcatVerif() {

	char	buf[9];

	bzero(buf, 9);
	ft_strcat(buf, "");
	ft_strcat(buf, "Bon");
	ft_strcat(buf, "j");
	ft_strcat(buf, "our.");
	ft_strcat(buf, "");
	if (strcmp(buf, "Bonjour.") != 0)
      return 0;
	if (strcmp(buf, ft_strcat(buf, "")))
      return 0;
	return 1;
}
