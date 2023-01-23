#ifndef FTPRINTF_H
# define FTPRINTF_H

#include "libft.a"

int ft_printf(const char *, ...);
typedef struct s_flags
{
    char            *string; 
    int_fast8_t     cnrvsn:4;
    int_fast8_t     flag;
}					t_flags;

#endif