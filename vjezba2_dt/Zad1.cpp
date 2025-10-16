#include <iostream>
int* funkcija(int x) {
	int *niz = new int[x];
	niz[0] = 1;
	niz[1] = 1;
	for (int i = 2; i < x; i++) {
		niz[i] = niz[i - 1] + niz[i - 2];
	}
	return niz;


}


int main() {

	int n = 5;
	int* niz = funkcija(n);
	std::cout << "fibonacci niz: ";

	for (int i = 0; i < n; i++) {
		std::cout << niz[i];
	}
	delete[] niz;

	return 0;
}