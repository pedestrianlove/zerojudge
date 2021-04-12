#include <iostream>

using namespace std;

int digit (int &x) {
	int tmp = x % 2;
	x = x / 2;
	return tmp;
}

void output_d (int x) {
	if (x != 0) {
		int result = x % 2;
		output_d (x/2);
		cout << result;
	}
}


int main ()
{
	ios_base::sync_with_stdio(false);

	int x, counter, result, tmp;
	while (cin >> x && x != 0) {
		// output the value before modify
		cout << "The parity of ";
		output_d (x);
		
		// process and count number of 1's
		counter = 0; result = 0; tmp = 0;
		while (x > 0) {
			if (digit (x) == 1) counter ++;
		}
		
		// output
		cout << " is " << counter << " (mod 2)." << endl;
	}



}
