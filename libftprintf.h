#ifndef FTPRINTF_H
# define FTPRINTF_H

#include "libft.a"

int ft_printf(const char *, ...);
typedef struct s_flags
{
    char            *string; 
    int_fast8_t     cnvsn : 4;
    int_fast8_t     flag;
    struct s_flags  *next;
}					t_flags;

#endif