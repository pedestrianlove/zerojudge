// Zerojudge a005.cpp

#include <iostream>

using namespace std;

int main ()
{
	int test_cases;
	while (cin >> test_cases){
		for (int j = 0; j < test_cases; j++) {
			
			// input
			int* a = new int[4];
			for (int i = 0; i < 4; i++) 
				cin >> a[i];
		
			// print the first part
			for (int i = 0; i < 4; i++) 
				cout << a[i] << " ";
		

			// print the remaining term
			if ((a[3] - a[2]) == (a[2] - a[1]))
				cout << a[3] + (a[1] - a[0]) << endl;
			else
				cout << a[3] * (a[1] / a[0]) << endl;
		
			delete (a);
		}
	}
	


}
