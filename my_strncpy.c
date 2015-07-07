/*
** my_strncpy.c for  in /home/sasees_t/piscine/c/libmy_01
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Fri Oct  3 14:14:08 2014 SASEESKUMAR Tharushan
** Last update Fri Oct  3 14:14:54 2014 SASEESKUMAR Tharushan
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  while (i < n)
    {
      i = i + 1;
      dest[i] = '\0';
    }
  return (dest);
}
