/*
** my_putstr.c for  in /home/sasees_t/piscine/c/Jour05/sasees_t
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Fri Oct  3 10:20:15 2014 SASEESKUMAR Tharushan
** Last update Sat Oct  4 16:59:06 2014 SASEESKUMAR Tharushan
*/

void    my_putchar(char c);
void	my_putstr(char *str)
{
  int	i;
  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
