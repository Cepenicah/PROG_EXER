/*
AUTHOR : Nicah S. Cepe
DATE : August 4, 2018
NAME : EXERCISE 23 - FORCE
*/
#include <iostream>
using namespace std;

int main ()
{
	float d, m1, m2, force;
	double k = 0.0000000667;
	float multMass, squareD;
	
	cout << "Enter the distance: ";
	cin >> d;
	
	cout << "Enter Mass no. 1: ";
	cin >> m1;
	
	cout << "Enter Mass no. 2: ";
	cin >> m2;
	
	multMass = m1 * m2;
	squareD = d * d;
	
	force = k * (multMass / squareD);
	
	cout << "The Force is " << force;
	
	return 0;
}
