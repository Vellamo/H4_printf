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
    # 0001 0000 (8)      0000 1000 (16)   + 0000 0100 (32)

*/

#include "libftprintf.h"


int_fast8_t cnsvn_test (char test_chr)
{
	int_fast8_t i = 0;
	
    if (test_chr == '-')
        (i + 1);
    if (test_chr == '0')
        (i + 2);
    if (test_chr == '.') 
        (i + 4);
    if (test_chr == '#')
        (i + 8);
    if (test_chr == ' ')
        (i + 16); 
    if (test_chr == '+')
        (i + 32);
    return (i);
}

int_fast8_t flag_test (char test_chr)
{
	int_fast8_t i = 0;
	
    if (test_chr == 'c')
        (i + 1);
    else if (test_chr == 's')
        (i + 2);
    else if (test_chr == 'p') 
        (i + 3);
    else if (test_chr == 'd')
        (i + 4);
    else if (test_chr == 'i')
        (i + 5); 
    else if (test_chr == 'u')
        (i + 6);
	else if (test_chr == 'x')
        (i + 7);
	else if (test_chr == 'X')
        (i + 8);
	else if (test_chr == '%')
        (i + 9);
    return (i);
}

// cspdiuxX%
// -0. # +

int	prcss_cnvrsn(const char input, va_list args)
{

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
            prcss_cnvrsn(input[chr_count], &args);
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