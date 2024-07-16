// Standard input output header file that contains information about builtin functions like printf and scanf.
#include<stdio.h>
// Console input output header file that contains information about builtin functions like getch and getche.
#include<conio.h>
// execution of a c program starts from main function. int tells that function will return an integer and void inside brackets tells that function does not take any argument.
int main(void)
{     // Delimiters
    // printf is a function that does not returns anything but prints string (Everything written inside "") on console 
    // \n is used to move cursor to next line. 
    printf("Hello, World!\n");
    // getch takes a character as input from user.
    getch();
    // this statement is used to return value back to OS in this case it is 0 means nothing.
    return 0;
    // ";"is the statement terminator. It tells the compiler that statement is completed.
}



// C Language: A general-purpose, procedural programming language.
// Developed By: Dennis Ritchie at Bell Labs in the early 1970s.
// Purpose: System programming, creating operating systems, compilers, etc.