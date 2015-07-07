/*
** my_strncmp.c for  in /home/sasees_t/piscine/c/libmy_01
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Fri Oct  3 14:20:00 2014 SASEESKUMAR Tharushan
** Last update Fri Oct  3 14:21:22 2014 SASEESKUMAR Tharushan
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int   i;
  i = 0;
  while (s1[i] == s2[i] &&  s1[i] != '\0' && i < n)
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
