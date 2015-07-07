/*
** my_getnbr.c for  in /home/sasees_t/piscine/c/Libmy/sasees_t/libmy_01
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Sat Oct  4 17:06:18 2014 SASEESKUMAR Tharushan
** Last update Sat Oct  4 17:09:16 2014 SASEESKUMAR Tharushan
*/

int     my_getnbr(char *str)
{
  int   res;
  int   i;
  int   nega;
  res = 0;
  i = 0;
  nega = 1;
  while (str[i] <= '0' || str[i] >= '9')
    i = i + 1;
  if (i > 0 && str[i - 1] == '-')
    nega = -1;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
        {
          res = res * 10;
          res = res + str[i] - 48;
        }
      else
        return (res * nega);
      i = i + 1;
    }
  return (res * nega);
}
