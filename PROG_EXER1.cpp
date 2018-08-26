// exercise NO. 1
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int a = 2, b = 4, c = 6;
	int x1, x2;
	int d,e;
	
	e = (b*b)-(4*a*c);
	d = sqrt(e);
	
	x1 = (((b*-1) + d) / (2*a));
	x2 = (((b*-1) - d) / (2*a));
	
	
	cout << "The X1 is " << x1;
	cout << "The X2 is " << x2;
	
	
}
