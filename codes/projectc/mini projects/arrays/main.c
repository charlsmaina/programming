#include <stdio.h>
#include <stdlib.h>

//an array is a set of ordered data iteams
//elements in an arry are referenced by a means of an index or a subscript.
//array elements begin with the index 0

//An individual array element can be used anywhere that a normal variable can be used.

//For example, you can assign an array value to another      variable with a statement such as the following:g = grades[50]; .This statement takes the value contained in grades[50] and assigns it to g.

//a value can be stored in an element of an array by specifying the index or the position of the arary element in the left hand side of the equal sign

//In the statement grades[100] = 95; the value 95 is stored in element number 100 of the grades array
//The capability to represent a collection of related data items by a single array enables you to develop concise and efficient programs.

//interger valued expressions can also be used to reference  a particular element of  an array

//The declaration of an array involves declaring the type of element that will be contained in the array—such as int, float, or char—as well as the maximum number of elements thatwill be stored inside the array. (The C compiler needs this latter information to determine how much of its memory space to reserve for the particular array.)

// C does not do any checking of array bounds for you.if you refence an element tthat is out of bound an erroneous result is displayed

int main()
{
     int scores[10];
     int index;
     int st=10;

     scores[0]=st++;
     scores[1]=st++;
     scores[2]=st++;
     scores[3]=st++;
     scores[4]=st++;
     scores[5]=st++;
     scores[6]=st++;
     scores[7]=st++;
     scores[8]=st++;
     scores[9]=st++;

     for(index=0;index<10;index++)
        printf("value(%i)=%i\n",index,scores[index]);
  //last valid subscript of an array is always one less than the number of elements (due to that zeroth element).
  //the value of any uninitialized variable or array element is not defined. For this reason, no assumption should ever be made as to the value of an uninitialized variable or array element.


    return 0;
}
