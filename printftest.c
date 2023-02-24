#include <stdio.h>

int main ()
{
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

    
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");
    

}