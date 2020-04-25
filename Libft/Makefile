# MAKEFILE DE UNA LIBRERIA listamos las funciones que va a tener nuestra libreria
SRCS    =  ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c ft_lstnew.c  ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_atoi.c  ft_strnstr.c ft_strrchr.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_memccpy.c ft_memcpy.c ft_memset.c ft_bzero.c

#Funciones extra que vamos a utilizar en nuestra parte extra
SRCS_EXTRA	= ft_lstnew.c

# Objetos que vamos a generar
OBJS    = ${SRCS:.c=.o}


# Objetos extra que vamos a generar
OBJS_EXTRA   = ${SRCS_EXTRA:.c=.o}

# Nombre del ejecutable
NAME    = libft.a

# Compilador a utilizar
CC      = cc

#Comando para generar la libreria linkando los .o
AR      = ar rc

#Creamos indice de funciones que contiene las funciones de nuestra libreria por si luego queremos usarla para compilar.
RANLIB = ranlib 

# Borramos
RM      = rm -f

# Flag de compilacion
CFLAGS  = -Wall -Wextra -Werror

# Instrucciond e generar los archivos objeto
.c.o:   ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

# Linkado de los archivos objeto

${NAME}:
	${CC} ${CFLAGS} -c ${SRCS}
	${AR} ${NAME} ${OBJS}
	${RANLIB} ${NAME}



all:        ${NAME}

# LIMPIEZA DE LOS ARCHIVOS .O 
clean:
	${RM} ${OBJS}

# LIMPIEZA DE LOS ARCHIVOS .O + ME BORRA EL EJECUTABLE
fclean:	clean
		${RM} ${NAME}
#Fuerza la recompilacion
re:		fclean all

#Seccion bonus que compile las funciones extra
bonus:	


#Indicamos "reglas" que no deben de ser interpretadas como ficheros
.PHONY: all clean fclean re bonus