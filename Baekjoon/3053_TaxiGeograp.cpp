#include <iostream>
#include <cmath>
#define PI 3.141592653589

using namespace std;

int main() {
	double R;
	cin >> R;

	cout << fixed;
	cout.precision(6);

	cout << PI * R * R << endl;
	cout << (R * R) * (double)2.0;
}