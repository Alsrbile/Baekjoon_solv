#include <iostream>

using namespace std;

class Alpa {
public:
	int x, y;
};

int main() {
	Alpa dot[3];
	
	for (int i = 0; i < 3; i++) {
		cin >> dot[i].x >> dot[i].y;
	}

	if (dot[0].x == dot[1].x) {
		if (dot[0].y == dot[1].y) {
			cout << dot[2].x << " " << dot[2].y;
		}
		else if (dot[0].y == dot[2].y) {
			cout << dot[2].x << " " << dot[1].y;
		}
		else {
			cout << dot[2].x << " " << dot[0].y;
		}
	}

	else if (dot[0].x == dot[2].x) {
		if (dot[0].y == dot[1].y) {
			cout << dot[1].x << " " << dot[2].y;
		}
		else if (dot[0].y == dot[2].y) {
			cout << dot[1].x << " " << dot[1].y;
		}
		else {
			cout << dot[1].x << " " << dot[0].y;
		}
	}

	else {
		if (dot[0].y == dot[1].y) {
			cout << dot[0].x << " " << dot[2].y;
		}
		else if (dot[0].y == dot[2].y) {
			cout << dot[0].x << " " << dot[1].y;
		}
		else {
			cout << dot[0].x << " " << dot[0].y;
		}
	}

}