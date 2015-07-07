/*
** my_putchar.c for  in /home/sasees_t/piscine/c/Jour05/sasees_t
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Fri Oct  3 10:19:20 2014 SASEESKUMAR Tharushan
** Last update Fri Oct  3 14:02:19 2014 SASEESKUMAR Tharushan
*/

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}
