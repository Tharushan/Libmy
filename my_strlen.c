/*
** my_strlen.c for  in /home/sasees_t/piscine/c/libmy_01
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Fri Oct  3 11:39:09 2014 SASEESKUMAR Tharushan
** Last update Sat Oct  4 17:01:54 2014 SASEESKUMAR Tharushan
*/

int	my_strlen(char *str)
{
  int	n;
  n = 0;
  while (str[n] != '\0')
    {
      n = n + 1;
    }
  return (n);
}
