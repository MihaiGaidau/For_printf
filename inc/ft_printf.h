#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

# define MAX_UNS_INT    4294967295
# define RED            "\x1b[31m"
# define GREEN          "\x1b[32m"
# define YELLOW         "\x1b[33m"
# define BLUE           "\x1b[34m"
# define MAGENTA        "\x1b[35m"
# define CYAN           "\x1b[36m"
// # define RESET          "\x1b[0m"
# define RESET          "\033[0m"
# define BOLD_ON        "\x1B[1m"
# define ITALIC_ON      "\x1B[3m"
# define UNDERLINE_ON   "\x1B[4m"
# define INVERSE_ON     "\x1B[7m"
# define STRIKETHROUGH_ON   "\x1B[9m"
# define BOLD_OFF       "\x1B[22m"
# define ITALIC_OFF     "\x1B[23m"
# define UNDERLINE_OFF "\x1B[24m"
# define INVERSE_OFF "\x1B[27m"
# define STRIKETHROUGH_OFF "\x1B[29m"
# define FG_BLACK "\x1B[30m"
# define FG_RED "\x1B[31m"
# define FG_GREEN "\x1B[32m"
# define FG_YELLOW "\x1B[33m"
# define FG_BLUE "\x1B[34m"
# define FG_MAGNETA "\x1B[35m"
# define FG_CYAN "\x1B[36m"
# define FG_WHITE "\x1B[37m"
# define FG_DEFAULT "\x1B[39m"
# define BG_BLACK "\x1B[40m"
# define BG_RED "\x1B[41m"
# define BG_GREEN "\x1B[42m"
# define BG_YELLOW "\x1B[43m"
# define BG_BLUE "\x1B[44m"
# define BG_MAGNETA "\x1B[45m"
# define BG_CYAN "\x1B[46m"
# define BG_WHITE "\x1B[47m"
# define BG_DEFAULT "\x1B[49m"

void    ft_putchr(char c);
int     ft_Red(char *s);
int     ft_Green(char *s);
int     ft_Yellow(char *s);
int     ft_Blue(char *s);
int     ft_Magenta(char *s);
int     ft_Cyan(char *s);
int     ft_White(char *s);
int     check_color(char *s);
int     ft_isnbr(char c);
int     ft_fill_1(char c, int *q, int *w, int *e);
int     ft_fill_2(char c, int *q, int *w, int *e);
void    ft_fill(char *s,int *a);
char    *ft_str_to_n(unsigned long long q);
char    *ft_add_minus(char *s);
char    *ft_putnbr_long(long long int n);
char    *ft_putnbr_uns(unsigned long long int q);
void    ft_convertor_mini(unsigned long long int n, int b, int pos, char *w);
void    ft_convertor_max(unsigned long long int n, int b, int pos, char *w);
char    *ft_move_addres(char *s,int t, int b);
int     ft_get_i(int g1, int g3, char *s);
int     ft_put_first(char c, int g5, int *i, char z);
void    ft_put_space(int g6, char c, int *i);
void    ft_put_before(int i, char c);
void    ft_put_last(char c, int g5, char *s, int index);
int     ft_put_middle(int *a, char c, char *s, int index);
void    put_precision(char *s, char *q);
char    *ft_return_s(void *s);
char    *ft_return_c(long unsigned int n);
char    *ft_return_int(void *s, char *flags_data);
char    *ft_return_HEX(void *s, int g2);
char    *ft_return_hex(void *s, int g2);
char    *ft_return_16(void *s, char c, int g2);
char    *ft_return_oct(void *s, int g2);
char    *ft_return_adress(void *s);
char    *ft_return_bin(void *s);
char    *num_to_base(void *s, char *flags_data, int g2);
char    *ft_get_flags_data(char const *format, char *all_flags);
int     ft_printf(const char *format, ...);

#endif