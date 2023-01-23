/*
Requirements:
• Don’t implement the buffer management of the original printf().
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
• Your libftprintf.a has to be created at the root of your repository.
• Your function has to handle the following conversions: cspdiuxX%

    t_flags.cnvsn;
    1000 0000 %c (1)    0100 0000 %s (2)    1100 0000 %p (3)
    0010 0000 %d (4)    1010 0000 %i (5)    0110 0000 %u (6)
    1110 0000 %x (7)    0001 0000 %X (8)    1001 0000 %% (9)
	
    t_flags.flag; 
    - 1000 0000 (1)    0 0100 0000 (2)    . 0010 0000 (4)
    # 0001 0000 (8)    x 0000 1000 (16)

*/

#include "libftprintf.h"

int ft_printf(const char *input, ...)
{
    *t_flags        strct_head;
    *t_flags        strct_current;
    va_list         args;
    unsigned int    args_total;
    
    va_start(args, input);
    strct_head = (t_flags)malloc(sizeof(t_flags));


}