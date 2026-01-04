#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "";
	char c;
	int lb = 0;

	cout << "Enter your sentence below" << endl;
	getline(cin, s);

	cout << "\033[1m" << "List:" << "\033[0m" << endl;
	for (int i = 0; i < s.length(); i++) {
		c = s[i];
		lb = c;
		cout << c << " -> " << lb << endl;
	}
	cout << endl << "\033[1m" << "All in one line:" << "\033[0m" << endl;
	for (int i = 0; i < s.length(); i++) {
		c = s[i];
		lb = c;
		cout << lb;
	}
	cout << endl;
	return 0;
}
