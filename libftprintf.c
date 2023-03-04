/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lharvey <lharvey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:45:47 by lharvey           #+#    #+#             */
/*   Updated: 2023/02/16 12:45:55 by lharvey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

*/

#include "libftprintf.h"


/* Also uses bits, but in a lossy way where one flag may overwrite another */

int_fast8_t flag_test (char test_chr)
{
	int_fast8_t i = 0;
	
    if (test_chr == 'c')
        return (1);
    else if (test_chr == 's')
        return (2);
    else if (test_chr == 'p') 
        return (3);
    else if (test_chr == 'd')
        return (4);
    else if (test_chr == 'i')
        return (5);
    else if (test_chr == 'u')
        return (6);
	else if (test_chr == 'x')
        return (7);
	else if (test_chr == 'X')
        return (8);
	else if (test_chr == '%')
        return (9);
    return (-1);
}

// cspdiuxX%

int     prcss_cnvrsn(va_list *args, int *chr_count)
{
    char         char_flag;

    char_flag = flag_test(input[*chr_count]);
    // • %c Prints a single character.
    if (char_flag == 1)
        ft_putchar(va_arg(args, char *));
        *chr_count++;
	else if (char_flag == 2)
    // • %s Prints a string (as defined by the common C convention).

	else if (char_flag == 3)
    // • %p The void * pointer argument has to be printed in hexadecimal format.

	else if (char_flag == 4)
    // • %d Prints a decimal (base 10) number.

	else if (char_flag == 5)
    // • %i Prints an integer in base 10.

	else if (char_flag == 6)
    // • %u Prints an unsigned decimal (base 10) number.

	else if (char_flag == 7)
    // • %x Prints a number in hexadecimal (base 16) lowercase format.

	else if (char_flag == 8)
    // • %X Prints a number in hexadecimal (base 16) uppercase format.

	else if (char_flag == 9)
    // • %% Prints a percent sign.
        ft_putchar('%');
        *chr_count++;
    else
        return (-1);
}

int ft_printf(const char *input, ...)
{
    *t_flags        t_cnvrsn;
    va_list         args;
    int             chr_count;
 
    if (!input)    
        return (-1);

    chr_count = 0;
    va_start(args, input);
    while (*input)
    {
        if (*input == '%' && *(input + 1))
		{
			if (flag_test(*(input + 1)))
				prcss_cnvrsn(&args, &chr_count);
            input += 2;
		}
        else if (*input == '\\' && *(input + 1))
        {
            if (ft_isspace(*(input + 1)))
            {
                write(1, (input + 1), 1);
                chr_count++;
                input += 2;
            }
        }
        else
        {
            write(1, input, 1);
            chr_count++;
            input += 1;
        }
    }
    va_end(args);
	return (chr_count);
}

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		fprintf(stderr, "Something went VERY wrong.\n");
		return (-1);
	}


}
