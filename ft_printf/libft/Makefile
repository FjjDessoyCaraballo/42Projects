SRCS =	ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_atoi.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_putchar_fd.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c

BONUS = ft_lstadd_front_bonus.c\
		ft_lstnew_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c

BOBJS = $(BONUS:.c=.o)

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

OFILES = $(SRCS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -rf $(OFILES) $(BOBJS)

fclean: clean
	rm -f $(NAME)
	rm -f .bonus

re: fclean $(NAME)

bonus: .bonus

.bonus: $(OFILES) $(BOBJS)
	ar rcs $(NAME) $(OFILES) $(BOBJS)
	touch .bonus

.PHONY: all clean fclean re
