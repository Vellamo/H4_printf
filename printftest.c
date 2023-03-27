#include <stdio.h>
#include "libft.h"
#include "libftprintf.h"

    /*
      The format string is a character string, beginning and ending in its initial shift  state,  if  any.
       The  format  string  is  composed of zero or more directives: ordinary characters (not %), which are
       copied unchanged to the output stream; and conversion  specifications,  each  of  which  results  in
       fetching  zero  or  more  subsequent  arguments.  Each conversion specification is introduced by the
       character %, and ends with a conversion specifier.  In between there may be (in this order) zero  or
       more flags, an optional minimum field width, an optional precision and an optional length modifier.

       The arguments must correspond properly (after type promotion) with the conversion specifier.  By de‐
       fault, the arguments are used in the order given, where each '*' (see Field width and Precision  be‐
       low)  and each conversion specifier asks for the next argument (and it is an error if insufficiently
       many arguments are given).  One can also specify explicitly which argument is taken, at  each  place
       where  an  argument is required, by writing "%m$" instead of '%' and "*m$" instead of '*', where the
       decimal integer m denotes the position in the argument list of the desired argument, indexed  start‐
       ing from 1.  Thus,

           printf("%*d", width, num);

       and

           printf("%2$*1$d", width, num);

       are equivalent.
    */

    /*
    For some numeric conversions a radix character ("decimal point") or thousands' grouping character is
       used.   The actual character used depends on the LC_NUMERIC part of the locale.  (See setlocale(3).)
       The POSIX locale uses '.' as radix character, and does not have a grouping character.  Thus,

               printf("%'.2f", 1234567.89);
    */
    
    /*
        • %c Prints a single character.
        • %s Prints a string (as defined by the common C convention).
        • %p The void * pointer argument has to be printed in hexadecimal format.
        • %d Prints a decimal (base 10) number.
        • %i Prints an integer in base 10.
        • %u Prints an unsigned decimal (base 10) number.
        • %x Prints a number in hexadecimal (base 16) lowercase format.
        • %X Prints a number in hexadecimal (base 16) uppercase format.
        • %% Prints a percent sign.
    */

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		fprintf(stderr, "Something went VERY wrong.\n");
		return (-1);
	}

    char    *test_c = "character test : %c \n";

    char    chr1 = 'a';
    char    chr2 = 'ä';
    char    chr3 = '^';
    char    chr4 = '%';
    char    chr5 = '/';

    char    *test_s = "string test : %s \n";

    char    *str1 = "1234!#!#567890+!#¤´";
    char    *str2 = "/0/0/0/0~~/-/";
    char    *str3 = "a";
    char    *str4 = "2234567892345678";
    char    *str5 = "";

    char    *test_p = "void * test : %p \n";
    void    *vpoint1 = &chr1;
    void    *vpoint2 = &str1;
    void    *vpoint3 = &str2;

    char    *test_d = "decimal (Base 10) test : %d \n";

    char    *test_i = "integer (Base 10) test : %i \n";

    char    *test_u = "unsigned decimal (Base 10) test : %u \n";

    char    *test_x = "hexadecimal lcase (Base 16) test : %x \n";

    char    *test_X = "hexadecimal ucase (Base 16) test : %X \n";

    char    *test_percent = "print percent test : %% \n";

    printf("TESTING BEGINS:");
    
    printf(test_c, chr);
    ft_printf(test_c, chr);

	printf(".....
	");

	printf(test_c, chr2);
    ft_printf(test_c, chr2);

	printf(".....
	");

	printf(test_c, chr3);
    ft_printf(test_c, chr3);

	printf(".....
	");

	printf(test_s, str1);
    ft_printf(test_s, str1);

		printf(".....
	");

	printf(test_s, str2);
    ft_printf(test_s, str2);

		printf(".....
	");

	printf(test_p, vpoint1);
    ft_printf(test_s, vpoint1);

		printf(".....
	");

	printf(test_p, vpoint2);
    ft_printf(test_s, vpoint2);


    printf("\n");

}