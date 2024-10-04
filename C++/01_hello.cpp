// Compilation of a c++ code starts from main function.

/*
    iostream is the proprocessor directive.
    it contains info about built in functions like cin, cout, endl etc.
 */
#include<iostream>

/*
    namespace  is used to group a set of identifiers.
    std is the namespace for standard library.   
*/

using namespace std;

/*
    main function  is the entry point of the program.
    It is the first function that gets called when the program starts.
    It returns an integer value to the operating system.
*/
int main()
{
    // cout is us ed to print something on the screen.
    // ; is the statement terminator used at the end of each line.
    // endl is used to insert a new line after the output.
    cout << "Hello World" << endl;
    // another way to use cout is by using namespace std along with it. so that the compiler  
    std::cout << "My name is sajid";
    // return 0
    return 0;
}
