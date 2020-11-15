// Zerojudge a010.cpp

#include <iostream>

using namespace std;

int main ()
{
	int num;
	while (cin >> num) {
		int divisor = 2;
		int divisor_count = 0;
		int counter = 0;
		while (true) {
			if (num % divisor == 0) {
				num = num / divisor;
				divisor_count ++;
			}
			else {
				if (divisor_count >= 1) {
					if (counter > 0) cout << " * ";
					if (divisor_count >= 2)
						cout << divisor << '^' << divisor_count;
					else
						cout << divisor;
					divisor_count = 0;
					counter ++;
				}
				if (divisor == 2) 	divisor ++;
				else 			divisor += 2;
				if (num == 1)
					break;
			}
		}
		cout << endl;
	}
}
