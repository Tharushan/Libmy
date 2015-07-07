/*
** my_put_nbr.c for  in /home/sasees_t/piscine/c/libmy_01
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Fri Oct  3 11:33:57 2014 SASEESKUMAR Tharushan
** Last update Tue Oct  7 20:44:05 2014 SASEESKUMAR Tharushan
*/

#include <unistd.h>
void    my_putchar(char c);
int	my_put_nbr(int nb)
{
  int	save;
  int	pow;
  if (nb == -2147483648)
    write(1, "-2147483648", 11);
  else
    {
      if (nb < 0)
	{
	  nb = (-1) * nb;
	  my_putchar('-');
	}
      save = nb;
      for (pow = 1; save >= 10; pow *= 10)
	{
	  save = save / 10;
	}
      while (pow > 0)
	{
	  my_putchar(nb / pow + '0');
	  nb = nb % pow;
	  pow = pow / 10;
	}
    }
  return (0);
}
