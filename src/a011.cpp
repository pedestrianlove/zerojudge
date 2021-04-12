#include <iostream>

using namespace std;

int main ()
{
	char tmp;
	int counter = 0;
	while (scanf ("%c", &tmp) != EOF) {
		if (tmp == ' ')
			counter ++;
		else if (tmp == '\n') {
			printf ("%d\n", counter + 1);
			counter = 0;
		}
	}
	printf ("%d\n", counter + 1);



}
