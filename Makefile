##
## Makefile for  in /home/sasees_t/piscine/c/Libmy/sasees_t/libmy_01
## 
## Made by SASEESKUMAR Tharushan
## Login   <sasees_t@etna-alternance.net>
## 
## Started on  Sat Oct  4 20:05:01 2014 SASEESKUMAR Tharushan
## Last update Sat Oct 11 18:19:54 2014 SASEESKUMAR Tharushan
##

NAME	=	libmy.a
SRC	=	$(wildcard *.c)
OBJ	=	$(SRC:%.c=%.o)
RM	=	rm -f
$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
all:		$(NAME)

clean:		
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)
re:		fclean all