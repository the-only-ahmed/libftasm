/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 01:59:37 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/03/10 16:19:15 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int   ft_catVerif(int ac, char **av) {

   ft_cat(5);
   print(1, "test 5");

   if (ac < 2)
   {
      ft_cat(0);
      return (print(1, "test 0"));
   }
   else
   {
      int	i = 1;
      int	res = 0;
      while (i < ac)
      {
         int fd;

         if ((fd = open(av[i], O_RDONLY)) > 0)
         {
            ft_cat(fd);
            res += print(1, "test fd");
            if (close(fd) < 0)
               return (-3);
         }
         else
            printf("%s is not a valid file\n", av[i]);
         i++;
      }
      return (res == i-1);
   }
   return 0;
}
