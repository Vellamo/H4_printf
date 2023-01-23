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
    # 0001 0000 (8)    x 0000 1000 (16)   % 0000 0100 (32)

*/

#include "libftprintf.h"

static unsigned int flag_test (char test_chr)
{
    if (test_chr == '-')
        return (1);
    if (test_chr == '0')
        return (2);
    if (test_chr == '.') 
        return (4);
    if (test_chr == '#')
        return (8);
    if (test_chr == 'x')
        return (16);
    if (test_chr == '%')
        return (32);
    else 
        return (0);
}

int ft_printf(const char *input, ...)
{
    *t_flags        t_cnvrsn;
    int             chr_count;
    va_list         args;
 
    if (!input)    
        return (-1);
    chr_count = 0;
    va_start(args, input);
    while (input[chr_count])
    {
        if (input[chr_count] != flag_test)
            output_str[chr_count] == input[chr_count];
        else
            prcss_cnvrsn(input[chr_count], &chr_count, &args);
        chr_count++;
    }
    va_end(args);
    return (chr_count);
}

int main(int argc, char **argv)
{
    unsigned int    max_args;

    max_args = 0;
	if (argc <= 1)
	{
		fprintf(stderr, "Something went VERY wrong.\n");
		return (-1);
	}


}