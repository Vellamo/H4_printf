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

#include "libftprintf.h"
#include "libft/libft.a"

/* Uses bits, but in a lossy way where one flag may overwrite another */

int_fast8_t flag_test (char test_chr)
{
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
    else return (-1);
}

void    prcss_cnvrsn(va_list *args, int *chr_count, const char *input)
{
    int_fast8_t     char_flag;
    char            *string;
    int             i;

    i = 0;
    char_flag = flag_test(input[*chr_count]);
    if (char_flag == 1)
        string = (char)va_arg(*args, int);
    if (char_flag == 2)
    {
    	string = va_arg(*args, char *);
	    if (!(*string))
		    string = "(null)";
    }
	if (char_flag == 4 || char_flag == 5 || char_flag == 6)
    {
        string = ft_itoa((int)(va_arg(*args, int)));
    }
	if (char_flag == 3 || char_flag == 7 || char_flag == 8)
    {
        if (char_flag == 3) 
            string = ft_itoa_base((int)(va_arg(*args, void *)), 16);
        else
        {
            string = ft_itoa_base((int)(va_arg(*args, int)), 16);
            if (char_flag == 8)
                while (string[i])
                {
                    string[i] = ft_toupper(string);
                    i++;
                }
        }
    }
	if (char_flag == 9)
		va_arg(*args, char *);
        string = "%";
    if (*string)
    {
        ft_putstr_fd(string, ft_strlen(string));
        *chr_count += ft_strlen(string);
    }
}

int ft_printf(const char *input, ...)
{
    va_list     args;
    int         chr_count;
 
    if (!input)    
        return (-1);
    chr_count = 0;
    va_start(args, input);
    while (*input)
    {
        if (*input == '%' && flag_test(*(input + 1)))
		{
			prcss_cnvrsn(&args, &chr_count, input);
            input += 2;
		}
        else
        {
            ft_putchar_fd(*input, 1);
            chr_count++;
            input += 1;
        }
    }
    va_end(args);
	return (chr_count);
}
