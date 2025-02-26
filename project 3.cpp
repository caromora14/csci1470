////////////////////////////////////////////////////////////////
//
// Name: Carolina Morales
// Date: 02/12/2025
// Class: CSCI 1470.04
// Semester: Spring 2025
// Instructor: Dr. Jonatan Reyes
//
// Program Name: Project 3 Number generator
// Program Description: Even and Odd number random numbers
//
////////////////////////////////////////////////////////////////
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  
int randnum, randrange, randrange2,randnum2, randnum3, randrange3, randnum4, randrange4, randrange5, randnum5;

  srand(time(0));
  randnum=rand();
  randrange=rand()%100+1;
  if(randrange% 2 == 0)
        printf("%d is even.", randrange);
    else
        printf("%d is odd.", randrange);
 
  randnum2=rand();
  randrange2=rand()%100+1;
  if(randrange2% 2 == 0)
        printf("%d is even.", randrange2);
    else
        printf("%d is odd.", randrange2);

  randnum3=rand();
  randrange3=rand()%100+1;
  if(randrange3% 2 == 0)
        printf("%d is even.", randrange3);
    else
        printf("%d is odd.", randrange3);

  randnum4=rand();
  randrange4=rand()%100+1;
  if(randrange4% 2 == 0)
        printf("%d is even.", randrange4);
    else
        printf("%d is odd.", randrange4);

  randnum5=rand();
  randrange5=rand()%100+1;
  if(randrange5% 2 == 0)
        printf("%d is even.", randrange5);
    else
        printf("%d is odd.", randrange5);
 
 

  return 0;
}
