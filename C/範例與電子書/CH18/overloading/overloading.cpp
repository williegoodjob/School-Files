#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

double area(int, int);
double area(int, int, int);

int main(int argc, char** argv) {
	int x=9, y=15, z=14;
	cout<<"�T���Ω����G"<<x<<"�B�����G"<<y<<"�A���n���G"<<area(x,y)<<"\n\n";
	cout<<"�T���ΤT������G"<<x<<"�B"<<y<<"�B"<<z<<"�A���n���G"<<area(x,y,z)<<"\n\n";	
	system("PAUSE");
	return 0;
}

double area(int d, int h){
	return (double)d * (double)h /2;
}

double area(int a, int b, int c){
	double s = (double)(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

