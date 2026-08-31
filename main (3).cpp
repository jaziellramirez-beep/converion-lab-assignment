/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    double farenheit;
    double celsius;
    
    //get input from user
    
    std::cout<<"insert celsius to convert into farenheit ";
    std::cin>>celsius;
    
    //get coversion
    
    farenheit=9.0/5*celsius+32;
    
    //display result
    
std::cout<<"The farenheit is "<<farenheit<<std::endl;
    return 0;
}