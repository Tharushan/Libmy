/*
** my_putnbr_base.c for  in /home/sasees_t/piscine/c/Libmy/sasees_t/libmy_02
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Tue Oct  7 20:03:20 2014 SASEESKUMAR Tharushan
** Last update Tue Oct  7 20:51:47 2014 SASEESKUMAR Tharushan
*/

void	my_putchar(char c);
int	base_len(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}

int	my_putnbr_base(int nbr, char *base)
{
  int	save;
  int	pow;
  if (nbr == -2147483648)
    write(1, "-2147483648", 11);
  else
    {
      if (nbr < 0)
	{
	  nbr = (-1) * nbr;
	  my_putchar('-');
	}
      save = nbr;
      for (pow = 1; save >= base_len(base); pow *= base_len(base))
	{
	  save = save / base_len(base);
	}
      while (pow > 0)
	{
	  my_putchar(nbr / pow + '0');
	  nbr = nbr % pow;
	  pow = pow / base_len(base);
	}
    }
  return (0);
}
