// Zerojudge a015.cpp

#include <iostream>

using namespace std;

int main ()
{
	int row_len, col_len;
	while (cin >> row_len >> col_len) {
		// init array
		int total_len = row_len * col_len;
		int * matrix = new int[total_len];

		// input
		for (int row = 0; row < row_len; row++)
			for (int col = 0; col < col_len; col++)
				cin >> matrix[row * col_len + col];

		// output (transpose)
		for (int col = 0; col < col_len; col++) {
			for (int row = 0; row < row_len; row++)
				cout <<  matrix[row * col_len + col] << ' ';
			cout << endl;
		}
		


		// free array
		delete (matrix);
	}

}
