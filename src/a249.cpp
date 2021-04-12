#include <iostream>
#include <cmath>

using namespace std;

class Tree {
	public:
	int result;
	int ball_count;
	int depth;
	bool * data;
	
	// constructor
	Tree () {
		cin >> depth >> ball_count;
		build_tree ();
	}
	int drop () {
		int current_idx, next_idx;
		int tmp_depth;
		while (ball_count > 0) {
			next_idx = 0;
			tmp_depth = depth;
			while (tmp_depth > 1) {
				current_idx = next_idx;
				if (data[current_idx] == false)
					next_idx = current_idx * 2 + 1;
				else
					next_idx = current_idx * 2 + 2;
				data[current_idx] = !data[current_idx];
				tmp_depth --;
			}
			ball_count --;
			result = next_idx + 1;
		}
		return result;
	}
	private:
	// inner utils
	void build_tree () {
		int node_count = pow (2, depth) - 1;
		data = new bool[node_count];
		for (int i = 0; i < (node_count/2); i++) data[i] = false;
	}
};



int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int data_count; scanf ("%d", &data_count);
	Tree* tmp;
	for (int i = 0;i < data_count; i++) {
		// init tree
		tmp = new Tree ();

		// drop ball until done and output
		cout << tmp -> drop () << '\n';

		// delete tree
		delete (tmp);

	}

}
