////////////////////////////////////////////////////////////////
//
// Name: Carolina Morales
// Date: 02/12/2025
// Class: CSCI 1470.04
// Semester: Spring 2025
// Instructor: Dr. Jonatan Reyes
//
// Program Name: Project 3 Number generator
// Program Description: Even and Odd number on 5 numbers in other file
//
////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    ifstream cin("numbers.txt");
    int num, num2, num3, num4, num5;
    
    
    cin>>num>>num2>>num3>>num4>>num5;
    
     if(num% 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

    if(num2% 2 ==0)
        printf("%d is even.",num2);
    else
        printf("%d is odd." , num2);
    if(num3% 2 ==0)
        printf("%d is even.",num3);
    else
        printf("%d is odd." , num3);
    if(num4% 2 ==0)
        printf("%d is even.",num4);
    else
        printf("%d is odd." , num4);
    if(num5% 2 ==0)
        printf("%d is even.",num5);
    else
        printf("%d is odd." , num5);




    return 0;
}