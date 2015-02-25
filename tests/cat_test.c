/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 01:59:37 by ael-kadh          #+#    #+#             */
/*   Updated: 2015/02/25 01:59:38 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"


int   ft_catVerif(int ac, char **av) {

   printf("ca marche ?\n");
   print(ft_cat(5), "test 5");

   if (argc < 2)
      return (print(ft_cat(0), "test 0"));
   else
   {
      int i = 1;
      res = 0;
      while (i < ac)
      {
         int fd;

         if ((fd = open(av[i], O_RDONLY)) > 0)
         {
            res += print(ft_cat(fd), "test fd");
            if (close(fd) < 0)
               return (-3);
         }
         else
            printf("%s is not a valid file\n", argv[i]);
         i++;
      }
      return (res == i-1);
   }
   return 0;
}
