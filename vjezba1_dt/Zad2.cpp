#include <iostream>
#include <iomanip>
using namespace std;

int funkcija(int x, int low = 1, int high = 10) {
	if (x < low) return low;
	else if (x > high) return high;
	else
		return x;



}

double funkcija(double y, double low = 1.0, double high = 10.0 ) {
	if (y < low) return low;
	else if (y > high) return high;
	else
		return y;

	
}

int main() {

	int x{ 11 };
	double y{ 0.5};
	std::cout << funkcija(x) << '\n';
	std::cout << funkcija(y);




}