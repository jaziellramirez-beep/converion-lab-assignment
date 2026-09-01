//Name:Jaziel Ramirez
// Date: september 2, 2026
// Class: 1470.04
// Semester: Fall 2026
// CSCI 1470 Instructor: Dr. Reyes
//This program will convert celsius into farenheit
//*******************************************************************************//
#include <iostream>

int main()
{
    double farenheit;
    double celsius;
    
    
    std::cout<<"insert celsius temperature to convert into farenheit ";
    std::cin>>celsius;
    
    farenheit=9.0/5*celsius+32;
    
std::cout<<"The farenheit tempature is "<<farenheit<<std::endl;
    return 0;
}
