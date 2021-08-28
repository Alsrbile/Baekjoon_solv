#include <iostream>

using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;

	int* p = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	for (int i = 0; i < n; i++) {
		int count = 0;
		if (p[i] == 1) continue;
		else if (p[i] == 2) {
			cnt++;
			continue;
		}
		else if (p[i] == 3) {
			cnt++;
			continue;
		}
		else if (p[i] == 4) {
			continue;
		}
		for (int j = 2; j < p[i]; j++) {
			if (p[i] % j == 0) {
				count++;
				break;
			}
		}
		if (count == 0) cnt++;
	}
	cout << cnt;
}