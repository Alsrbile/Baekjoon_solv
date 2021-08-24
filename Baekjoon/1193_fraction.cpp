#include <iostream>

using namespace std;

int main() {
	int input, i = 1;

	cin >> input;
	if (input == 1) {
		cout << 1 << '/' << 1;
		return 0;
	}

	while (1) {
		if (input - i > 0) { 
			input -= i;
			i++;
		}
		else break; 
	}

	if (i % 2 == 1) {
		cout << i-(input-1) << '/' << input;
	}
	else {
		cout << input << '/' << i - (input - 1);
	}
}