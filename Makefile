NAME = libasm.a

SDIR =	./srcs/
ODIR =	./objs/

SRCS_C =	$(SDIR)main.c\
			$(SDIR)testa_ft_strlen.c\
			$(SDIR)testa_ft_strcpy.c\
			$(SDIR)testa_ft_strcmp.c

SRCS_S =	$(SDIR)teste.s\
			$(SDIR)ft_strlen.s\
			$(SDIR)ft_strcpy.s\
			$(SDIR)ft_strcmp.s



OBJS_C = $(patsubst $(SDIR)%.c, $(ODIR)%.o, $(SRCS_C))		
OBJS_S = $(patsubst $(SDIR)%.s, $(ODIR)%.o, $(SRCS_S))		

ASM = nasm
ASM_FLAGS = -f elf64

CC = clang
HEADERS = -I./includes
C_FLAGS = -Wall -Werror -Wextra -g
C_SANIT = -fsanitize=address
L_FLAGS =  -L. -lasm

$(NAME):	$(OBJS_S)
	ar rcs $(NAME) $(OBJS_S)

$(ODIR)%.o:	$(SDIR)%.s
	mkdir -p $(ODIR)
	$(ASM) $(ASM_FLAGS) $< -o $@

run:	$(SRS_C) $(NAME)
	$(CC) $(SRCS_C) $(C_FLAGS) $(C_SANIT) $(HEADERS) $(L_FLAGS) -o $@
	./run

all: $(NAME)

clean:
	rm -f $(OBJS_S)
	rm -f $(OBJS_C)
	rmdir $(ODIR)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean, fclean, re, run
