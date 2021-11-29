#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
double t[8];
double f(double a, double a1, double a2, double a3, double x)
{
	return a+ (a1*x) + (a2*pow(x,2)) + (a3*pow(x,3));
}
int main(int argc, char** argv)
{
	ifstream wejscie;
	ofstream wyjscie;
	wejscie.open("funkcja.txt");
	wejscie.open("wynik.txt");
	for(int i=0; i<=7; i++){
		wejscie>>t[i];
	}
	wejscie.close();
	wyjscie<<f(t[4],t[5],t[6],t[7], 1.5);
	wyjscie.close();
	return 0; 
}
