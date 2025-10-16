#include <iostream>
#include <iomanip>
using namespace std;



int& at(int niz[], int i) {
	return niz[i];
}

int main() {
	int niz[5] = { 1, 2, 3, 4, 5 };
	at(niz, 4) += 1;
		for (int a : niz) {
			std::cout << a << " ";
		}
		

	return 0;
}
