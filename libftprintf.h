#ifndef FTPRINTF_H
# define FTPRINTF_H

#include "libft.a"
#include <stdib.h>
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *, ...);
typedef struct s_printf
{
    int             chr_count;
    int_fast8_t     flag;
}					t_printf;

#endif