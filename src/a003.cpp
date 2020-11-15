// Zerojudge a003.cpp
#include <iostream>

using namespace std;


int main ()
{
	int month, year;
	while (cin >> month >> year) {
		switch ((month * 2 + year) % 3) {
			case 0:
				cout << "普通" << endl;
				break;
			case 1:
				cout << "吉" << endl;
				break;
			case 2:
				cout << "大吉" << endl;
				break;
		}
	
	
	}
	


}
