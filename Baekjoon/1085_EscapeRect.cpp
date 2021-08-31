#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int min_x, min_y;

	if (x <= w / 2) {
		min_x = x;
	}
	else min_x = w - x;

	if (y <= h / 2) {
		min_y = y;
	}
	else min_y = h - y;

	if (min_x >= min_y) cout << min_y;
	else cout << min_x;
}