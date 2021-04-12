#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Site {
	public:
	string name;
	int score;
	Site () {
		cin >> name >> score;
	}

};

bool cmp (Site & A, Site & B) {
	return A.score > B.score;
}

int main ()
{
	// variables
	string url; int score;

	int n;
	while (cin >> n) {
		for (int i = 0;i < n; i++) {
			// input
			vector<Site> site_list;
			for (int j = 0;j < 10; j++) {
				Site tmp = Site ();
				site_list.push_back (tmp);
			}

			// sort
			sort (site_list.begin (), site_list.end (), cmp);


			// output
			cout << "Case #" << i+1 << ":" << endl;
			for (auto j = site_list.begin (); j != site_list.end (); ++j) {
				if (j -> score  == site_list.begin () -> score)
					cout << j -> name << endl;
			}
		}
	}


}
