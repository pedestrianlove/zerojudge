#include <iostream>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string card1, card2, card3, card4;
	int sum, tmp; cin >> tmp;
	while (cin >> card1 >> card2 >> card3 >> card4) {
    		sum = 0;
    		for (int I = 0 ;I < 4; I++) {
        		tmp = (card1[I]-'0');
        		if (I % 2 == 0) sum += (tmp*2)%10 + (tmp*2)/10;
        		else sum += tmp;
    		}
    		for (int I = 0 ;I < 4; I++) {
        		tmp = (card2[I]-'0');
        		if (I % 2 == 0) sum += (tmp*2)%10 + (tmp*2)/10;
        		else sum += tmp;
    		}
    		for (int I = 0 ;I < 4; I++) {
        		tmp = (card3[I]-'0');
        		if (I % 2 == 0) sum += (tmp*2)%10 + (tmp*2)/10;
        		else sum += tmp;
    		}
    		for (int I = 0 ;I < 4; I++) {
        		tmp = (card4[I]-'0');
        		if (I % 2 == 0) sum += (tmp*2)%10 + (tmp*2)/10;
        		else sum += tmp;
    		}
    		
		
		// output
		if (sum % 10 == 0 ) 
			cout << "Valid\n"; 
		else 
			cout << "Invalid\n";


	}



}
