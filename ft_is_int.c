/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 16:20:54 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/17 16:22:55 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_is_int(char *str)
{
  int neg;
  int i;
  unsigned long res;

  i = 0;
  neg = 1;
  res = 0;
  while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    i++;
  if (str[i] == '+' || str[i] == '-')
    if (str[i++] == '-')
      neg = -1;
  while (str[i] && str[i] >= '0' && str[i] <= '9')
  {
    res = res * 10 + (str[i] - 48);
    i++;
  }
  if (neg < 0 && res > (unsigned long)INT_MAX + 1)
    return (0);
  if (neg > 0 && res > (unsigned long)INT_MAX)
    return(0);
  return (1);
}
