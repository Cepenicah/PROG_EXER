/*
AUTHOR : Nicah S. Cepe
DATE : August 4, 2018
NAME : EXERCISE 24 - RICE
*/

#include <iostream>
using namespace std;

int main ()

{
	int ton = 2205;
	float amtRice;
	float bags;
	
	cout << "\nEnter the amount of rice in a bag (pounds) : ";
	cin >> amtRice;
	
	bags = ton / amtRice;
	
	cout << "\nThere should be " << bags << " number of bags to store one metric ton of rice.";
	
	return 0; 
	
}
