#include <iostream>

using namespace std;

int main() {
	int x, P=0;
	cin >> x;
	int res = x / 5;

	if (x == 3) {
		cout << 1;
		return 0;
	}
	else if (x < 5) {
		cout << -1;
		return 0;
	}

	for (int i = res; i >= 0; i--) { // 5배수 하나씩 감소
		int cnt = 0;
		int result = 0;
		while (1) {
			result = x - (i * 5) - (3 * cnt);

			if (result == 0) {
				cout << i + cnt;
				P = 1;
				break;
			}
			else if (result < 0)
				break;
			cnt++;
		}

		if (P == 1) break;
	}
	if (P == 0) cout << -1;
}