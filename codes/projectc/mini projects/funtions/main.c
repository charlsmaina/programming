#include <stdio.h>
#include <stdlib.h>

//The C language provides you with a convenient mechanism whereby the results of a function can be returned to the calling routine.
//The general syntax of this construct is straightforward enough: return expression;
//This statement indicates that the function is to return the value of expression to the calling routine. Parentheses are placed around expression by some programmers as a matter of programming style, but their use is optional
//.When the function declaration is made, you must also declare the type of value the function returns.

//A C function can only return a single value in the manner just described. Unlikesome other languages, C makes no distinction between subroutines (procedures) andfunctions. In C, there is only the function, which can optionally return a value. If the declaration of the type returned by a function is omitted, the C compiler assumes that the function returns an int—if it returns a value at all. Some C programmers take advantage of the fact that functions are assumed to return an int by default and omit the return type declaration.This is poor programming practice and should be avoided. When a function returns a value, make certain you declare the type of value returned in the function’s header, if only for the sake of improving the program’s readability

int main()
{

    return 0;
}
