#include<iostream>  //header file
//general; low level lang: close to hardware , high level lang : logically sound; far away from hardware
/* variables: container to store data
Data types: defines the type of data a variable will store. It is of 3 types - builtin (int,float,double,boolean),  user defined (Struct,Union,Enum) , derived (Array, pointers,Function)
*/

/* Reference variable

int a=843;
int &b=a;  //b is a reference variable storing the value of a
cout<<a<<endl<<b;

*/

/* TYPE CASTING
int a=45.89;
cout<<"The value of a is: <<int(a);   this will typecast the value of a, and print 45

The break statement can also be used to jump out of a loop.
The continue statement breaks one iteration (in the loop), if a specified condition occurs, 
and continues with the next iteration in the loop.

Pointers : Data type which stores the address of other data types
int* b= &a;  &: address of operator

cout<<"The address of a is"<< &a << endl;
cout<< "The address of a is" << b << endl;

cout<<"The value at address a is" << *b <<endl;

int** c=&b; //Pointer to Pointer variable

cout<<"the address of b is" << &b <<endl;
cout<< "the address of b is" << c <<endl;

cout<<"the value at address c is" << *c <<endl;  //will give the value of b
cout<<"the value at address value_at(value_at(c))"<< **c <<endl; //wil; give the value of a ie 3
  
