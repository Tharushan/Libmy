/*
** my_strcmp.c for  in /home/sasees_t/piscine/c/libmy_01
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Fri Oct  3 14:17:18 2014 SASEESKUMAR Tharushan
** Last update Sat Oct  4 17:00:44 2014 SASEESKUMAR Tharushan
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  i = 0;
  while (s1[i] == s2[i] &&  s1[i] != '\0')
    {
      i = i + 1;
    }
  if (s1[i] < s2[i])
    {
      return (-1);
    }
  if (s1[i] > s2[i])
    {
      return (1);
    }
  return (0);
}
