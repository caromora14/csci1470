////////////////////////////////////////////////////////////////
//
// Name: Carolina Morales
// Date: 02/12/2025
// Class: CSCI 1470.04
// Semester: Spring 2025
// Instructor: Dr. Jonatan Reyes
//
// Program Name: Project 3 
// Program Description: Area and Perimeter of square, rectangle, and triangle.
//
////////////////////////////////////////////////////////////////
#include <iostream>
#include <iomanip>
using namespace std;

	double arec(double x, double y);
    double prec(double x, double y);
    double asq(double a);
    double psq(double a);
    double atri(double h, double b);
    double ptri(double e, double c, double d);

int main(){

	
	double x, y, a, h, b, e, c, d;
	a=7.6;
	x=4.8;
	y=7.3;
	b=4.9;
	h=10.2;
	e=4.9;
	c=3.6;
	d=9.1;

	cout<<fixed<<setprecision(3)<<showpoint;
	

	cout<< "Area of Square with lenght "<< a << " is: "<<asq(a)<<endl;
	cout<< "Perimeter of Square with lenght "<< a << " is: "<<psq(a)<<endl;
	
	cout<<"Area of Rectangle with lenght "<<x<<" and width "<<y<< " is: "<<arec(x,y)<<endl;
	cout<<"Perimeter of Rectangle with length "<<x<<" and width "<<y<<" is: "<<prec(x,y)<<endl;

	cout<<"Area of Triangle with base "<<b<<" and height "<<h<<" is: "<<atri(h,b)<<endl;
	cout<<"Perimeter of Triangle with sides "<<e<<", "<<c<<", and "<<d<<" is "<<ptri(e,c,d)<<endl;

	
	return 0; 
}

double asq(double a) {

	 //a = 7.6;
	double asq= a*a;
	return asq;
} 
 
double psq(double a) {

	//a = 7.6;
	float psq = 4* a;
	return psq;
}
double arec(double x,double y) {
	
	int arec = x * y;
	return arec;

}
double prec(double x, double y){

	float prec=2*(x+y);
	return prec;
}
double atri( double h, double b){

	float atri=h*b;
	return atri;
}

double ptri (double e, double c, double d){

	float ptri=e+c+d;
	return ptri;
}


