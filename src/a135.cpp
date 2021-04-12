#include <iostream>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);

	string s;
	int counter = 0;
	while (cin >> s) {
		counter++;
		if (s[0] != '#') {
			cout << "Case " << counter << ": ";
			if (s[0] == 'H') {
				if (s[1] == 'E') {
					if (s == "HELLO") 	cout << "ENGLISH" << endl;
					else			cout << "UNKNOWN" << endl;
				}
				else if (s[1] == 'O') {
					if (s == "HOLA") 	cout << "SPANISH" << endl;
					else			cout << "UNKNOWN" << endl;
				}
				else if (s[1] == 'A') {
					if (s == "HALLO") 	cout << "GERMAN" << endl;
					else			cout << "UNKNOWN" << endl;
				}
				else cout << "UNKNOWN" << endl;
			}
			else if (s[0] == 'B')
				if (s == "BONJOUR")	cout << "FRENCH" << endl;
				else			cout << "UNKNOWN" << endl;
			else if (s[0] == 'C')
				if (s == "CIAO")	cout << "ITALIAN" << endl;
				else			cout << "UNKNOWN" << endl;
			else if (s[0] == 'Z')
				if (s == "ZDRAVSTVUJTE")	cout << "RUSSIAN" << endl;
				else				cout << "UNKNOWN" << endl;
			else {
				cout << "UNKNOWN" << endl;
			}
		}
	}



}


