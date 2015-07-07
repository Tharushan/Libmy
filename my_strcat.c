/*
** my_strcat.c for  in /home/sasees_t/piscine/c/Libmy/sasees_t
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Fri Oct  3 15:58:48 2014 SASEESKUMAR Tharushan
** Last update Sat Oct  4 20:24:49 2014 SASEESKUMAR Tharushan
*/

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	j;
  j = 0;
  i = 0;
  while (str1[i] != '\0')
    {
      i = i + 1;
    }
  while (str2[j] != '\0')
    {
      str1[i] = str2[j];
      i = i + 1;
      j = j + 1;
    }
  str1[i] = '\0';
  return (str1);
}
