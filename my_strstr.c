/*
** my_strstr.c for  in /home/sasees_t/piscine/c/Libmy/sasees_t/libmy_01
** 
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
** 
** Started on  Sat Oct  4 18:02:01 2014 SASEESKUMAR Tharushan
** Last update Sat Oct  4 22:22:03 2014 SASEESKUMAR Tharushan
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[j])
	{
	  j = j + 1;
	}
      else
	{
	  j = 0;
	}
      if (!to_find[j])
	{
	  i = i - (j - 1);
	  return (str + i);
	}
      i = i + 1;
    }
  return ("null");
}
