NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar
ARFLAGS = rcs
SRCS = ./
SOURCES = ft_ifchr.c ft_ifhex.c ft_ifstr.c ft_ifptr.c ft_ifint.c ft_ifudi.c \
			ft_putchar_fd.c ft_putnbr_fd.c ft_printf.c

OBJECTS = ${addprefix ${SRCS}, ${SOURCES:.c=.o}}

all : ${NAME} 

${NAME} : ${OBJECTS}
		${AR} ${ARFLAGS} $@ $^

${SRCS}%.o : ${SRCS}%.c
			${CC} ${CFLAGS} -I ./ft_printf.h -o $@ -c $<

clean :
		rm -rf ${OBJECTS}

fclean : clean
		rm -rf ${NAME}

re : fclean all
