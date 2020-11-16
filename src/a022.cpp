// Zerojudge a022.cpp

#include <iostream>

using namespace std;


int main ()
{
	string s;
	while (cin >> s) {
		int start = 0;
		int end = s.length () - 1;
		bool flag = true;
		while (start <= end) {
			if (start == end) break;
			if (s[start] == s[end]) {
				start ++;
				end --;
			}
			else {
				flag = false;
				break;
			}
		}

		if (flag)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	
	
	
	
	}


}
