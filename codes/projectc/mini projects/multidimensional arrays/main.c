#include <stdio.h>
#include <stdlib.h>
//c allows arrays of any dimension to be defined
//two-dimensional matrices.One of the most natural applications for a two-dimensional array arises in the case of a matrix.

//In mathematics, it is quite common to refer to an element of a matrix by use of a double subscript. So if you call the preceding matrix M, the notation Mi,j refers to the element in the ith row, jth column, where i ranges from 1 to 4, and j ranges from 1 to 5.

//In C, you can use an analogous notation when referring to elements of a two dimensional array. However, because C likes to start numbering things at zero, the 1stow of the matrix is actually row 0, and the 1st column of the matrix is column 0.

//Whereas in mathematics the notation Mi,j is used, in C the equivalent notation is M[i][j]
//Two-dimensional arrays are declared the same way that one-dimensional arrays are; thus int M[4][5]; declares the array M to be a two-dimensional array consisting of 4 rows and 5 columns, for a total of 20 elements. Each position in the array is defined to contain an integer value.

//Subscripts can also be used in the initialization list, in a like manner to singledimensional arrays. So the declaration int matrix[4][3] = { [0][0] = 1, [1][1] = 5, [2][2] = 9 }; initializes the three indicated elements of matrix to the specified values.The unspecified elements are set to zero by default.

int main()
{

    int arraym[3][4]=
    {
        {2,3,5,6},
        {4,6,7,9},
        {1,2,3,4}

                       };
    printf("%i",arraym[1][3]);

    //Executing the return statement with a  nonzero return value indicates by convention that the program terminated with an error condition.
    //for a variable leangth arrays...the size of the array is declared/specified by avariable and not a constant expression

    //a variable can be declared anywhere in a program, as long as the declaration occurs before the variable is first used.

    //A technique known as dynamic memory allocation is also often used to allocate space for arrays while a program is executing.This involves using functions such as malloc and calloc that are in the standard C library.


    return 0;
}
