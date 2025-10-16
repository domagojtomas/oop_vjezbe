#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

int main() {
	string s;
	cout << "Unesi tekst: ";
	getline(cin, s);

	for (char& c : s) {
		if (isspace(c)) {
			c = '_';
		}
		else if (isdigit(c)) {
			c = '*';
		}
		else {
			c = toupper(c);
		}
	}

	cout << "Rezultat: " << s << endl;
	return 0;
}
