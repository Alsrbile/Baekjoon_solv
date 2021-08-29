#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int M, N;
	cin >> M >> N;

	int* mat = new int[N+1];

	for (int i = 2; i < N + 1; i++) {
		mat[i] = i;
	}

	for (int i = 2; i <= sqrt(N); i++) {
		if (mat[i] == 0) continue;
		else {
			for (int j = i + i; j <= N; j += i) {
				mat[j] = 0;
			}

		}
	}

	for (int i = M; i <= N; i++) {
		if (mat[i] != 0)
			cout << i << '\n';
	}
}

