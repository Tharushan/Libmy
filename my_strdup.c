/*
** my_strdup.c for  in /home/sasees_t/piscine/c/Jour07/sasees_t/my_strdup
**
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
**
** Started on  Mon Oct  6 09:04:57 2014 SASEESKUMAR Tharushan
** Last update Thu Oct  9 19:32:40 2014 SASEESKUMAR Tharushan
*/

#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);
char	*my_strdup(char *str)
{
  char	*arg;
  arg = malloc(my_strlen(str) * sizeof(*str));
  my_strcpy(arg, str);
  return (arg);
}
