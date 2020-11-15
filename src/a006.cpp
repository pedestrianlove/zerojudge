// Zerojudge a006.cpp
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int a, b, c;
	while (cin >> a >> b >> c) {
		int D = b*b - 4 * a * c;
		if (D < 0) 
			cout << "No real root" << endl;
		else if (D == 0) {
			cout << "Two same roots ";
			cout << "x=" << b / (2 * a) << endl;
		}
		else if (D > 0) {
			cout << "Two different roots ";
			cout << "x1=" << (-b + sqrt (D)) / (2 * a);
			cout << " , x2=" << (-b - sqrt (D)) / (2 * a);
			cout << endl;
		}
	
	}


}
