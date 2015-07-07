/*
** my_aff_tab.c for  in /home/sasees_t/piscine/c/Libmy/sasees_t/libmy_01
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Sat Oct  4 17:36:56 2014 SASEESKUMAR Tharushan
** Last update Sat Oct  4 17:53:23 2014 SASEESKUMAR Tharushan
*/

void	my_putchar(char c);
void	my_put_nbr(int n);
int	my_aff_tab(int tab[], int len)
{
  int	i;
  for (i = 0; i < len; i++)
    {
      my_put_nbr(tab[i]);
      my_putchar('\n');
    }
  return (0);
}
