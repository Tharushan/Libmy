/*
** my_strcpy.c for  in /home/sasees_t/piscine/c/libmy_01
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Fri Oct  3 14:12:02 2014 SASEESKUMAR Tharushan
** Last update Fri Oct  3 14:12:49 2014 SASEESKUMAR Tharushan
*/

char	*my_strcpy(char *dest, char *src)
{
  int	n;
  for (n = 0 ; src[n] != '\0'; ++n)
    {
      dest[n] = src[n];
    }
  dest[n] = '\0';
  return (dest);
}
