// EXERCISE NO. 2
#include <iostream>
using namespace std;
int main()

{
	string FN, LN, BDAYMONTH, BDAYDAY, BDAYYEAR, EMAIL, ADD, NUM;
	
	
	cout << "Enter your First name: ";
	cin >> FN;
	cout << "Enter your Last name: ";
	cin >> LN;
	cout << "Enter birthday (month): ";
	cin >> BDAYMONTH;
	cout << "Enter birthday(day): ";
	cin >> BDAYDAY;
	cout << "Birthday(year): ";
	cin >> BDAYYEAR;
	cout << "Enter email: ";
	cin >> EMAIL;
	cout << "Enter Phone number: ";
	cin >> NUM;
	cout << "Enter address: ";
	cin >> ADD;
	cout << "\n\n\n";
	
	cout << "Name: " << FN << " " << LN << endl;
	cout << "Birth date: " << BDAYMONTH << " " << BDAYDAY << ", " << BDAYYEAR << endl;
	cout << "EMAIL: " << EMAIL << endl;
	cout << "PHONE: " << NUM << endl;
	cout << "ADDRESS: " << ADD << endl;
	 
		
	}
