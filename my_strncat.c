/*
** my_strncat.c for  in /home/sasees_t/piscine/c/Libmy/sasees_t
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Fri Oct  3 16:16:54 2014 SASEESKUMAR Tharushan
** Last update Sat Oct  4 20:25:50 2014 SASEESKUMAR Tharushan
*/

char    *my_strncat(char *str1, char *str2, int n)
{
  int   i;
  int	j;
  i = 0;
  j = 0;
  while (str1[i] != '\0')
    {
      i = i + 1;
    }
  while (str2[j] != '\0' && j < n)
    {
      str1[i] = str2[j];
      i = i + 1;
      j = j + 1;
    }
  str1[i] = '\0';
  return (str1);
}
