#include <iostream>

using namespace std;

long long abs (long long &x) {
	if (x < 0) x = -x;
	return x;
}

int main ()
{
	long long a, b;
	while (cin >> a >> b) {
		cout << abs (a - b) << endl;
	}



}
