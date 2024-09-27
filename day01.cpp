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

// Structures, Unions & Enums
Structures (also called structs) are a way to group several related variables into one place.
Each variable in the structure is known as a member of the structure.
Unlike an array, a structure can contain many different data types (int, string, bool, etc.).

// Create a structure variable called myStructure
struct {
  int myNum;
  string myString;
} myStructure;

// Assign values to members of myStructure
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Print members of myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";

// You can use (,) comma to use a structure in multiple variables

struct {
  string brand;
  string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Print the structure members
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";


//ENUMS
An enum is a special type that represents a group of constants (unchangeable values).

To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma:

enum Level {
  LOW,
  MEDIUM,
  HIGH
};
Note that the last item does not need a comma.

As you know, the first item of an enum has the value 0. The second has the value 1, and so on.

To make more sense of the values, you can easily change them:

enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};
int main() {
  enum Level myVar = MEDIUM;
  cout << myVar;  // Now outputs 50
  return 0;
}

Note that if you assign a value to one specific item, the next items will update their numbers accordingly:

enum Level {
  LOW = 5,
  MEDIUM, // Now 6
  HIGH // Now 7
};

Why And When To Use Enums?
Enums are used to give names to constants, which makes the code easier to read and maintain.

Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.

A union in C++ is a special data type that allows storing different data types in the same memory location. It is similar to a structure, but all members share the same memory space. Only one member can be active at a time, and accessing one member overwrites the value of the other members.

Key Characteristics:

Shared Memory Space: All members of a union occupy the same memory location.
Only One Active Member: Only one member can be accessed or modified at a time. Accessing another member overwrites the previous value.
Size: The size of a union is equal to the size of its largest member.
Alignment: The alignment of a union is the same as its largest member.
Example:

union Data {
    int i;
    float f;
    char str[20];
};
