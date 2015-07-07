/*
** my_str_to_wordtab.c for  in /home/sasees_t/piscine/c/Jour07/sasees_t/my_str_to_wordtab
**
** Made by SASEESKUMAR Tharushan
** Login   <sasees_t@etna-alternance.net>
**
** Started on  Mon Oct  6 12:07:08 2014 SASEESKUMAR Tharushan
** Last update Sat Oct 11 18:21:55 2014 SASEESKUMAR Tharushan
*/

#include <unistd.h>
#include <stdlib.h>

int alphanum(char c)
  {
    if (c >= 'a' && c <= 'z')
      {
        return(1);
      }
    else if (c >= '0' && c <= '9')
      {
        return (1);
      }
    else if (c >= 'A' && c <= 'Z')
      {
        return (1);
      }
    else
      {
        return (0);
      }
  }

char    *my_strdup(char *str);
int     count_word(char *str)
{
  int   i;
  int   count;

  i = 0;
  count = 0;
  while (str[i])
    {
      if (alphanum(str[i] == 1))
	{
          count++;
          while (str[i] && alphanum(str[i]) == 1)
	    i++;
        }
      i++;
	}
      return (count);
    }

int     count_char(char *str, int *i)
{
  int   count;

  count = 0;
  while (str[*i] && alphanum(str[*i]) == 1)
    {
      count++;
      i++;
    }
  return (count);
}

char    **my_str_to_wordtab(char *str)
{
  int   i;
  int   j;
  int   word;
  char  **tab;

  i = 0;
  j = 0;
  word = count_word(my_strdup(str));
  tab = malloc(sizeof(char *) * word);
  while (str[i] && word > 0)
    {
      if (alphanum(str[i] == 1))
	{
	  tab[j] = my_strdup(str + i);
	  tab[j][count_char(str, &i)] = '\0';
	  j++;
	  word = word - 1;
	}
      i++;
    }
  tab[count_word(my_strdup(str))] = NULL;
  return (tab);
}
