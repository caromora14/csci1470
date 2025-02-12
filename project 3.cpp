////////////////////////////////////////////////////////////////
//
// Name: Carolina Morales
// Date: 02/12/2025
// Class: CSCI 1470.04
// Semester: Spring 2025
// Instructor: Dr. Jonatan Reyes
//
// Program Name: Project 3 Number generator
// Program Description: Brief description of program
//
////////////////////////////////////////////////////////////////#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  
int randnum, randrange, randrange2, erandrange;
 srand(time(0));
 randnum=rand();
 randrange=rand()%100+1;
 erandrange=randrange%2;

 
 cout<<"Random number 1: "<<randrange<<endl;
 cout<<"If 0 then answer is even, if 1 then answer is odd: "<<erandrange<<endl;


  return 0;
}
