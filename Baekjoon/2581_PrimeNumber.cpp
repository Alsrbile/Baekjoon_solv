#include <iostream>

using namespace std;

void RES(int M, int N, int sum) {
	int cnt = 0, min = N, p =0;

	for (int i = M; i <= N; i++) {
		if (i == 1) continue;
		else if (i == 2) {
			sum += i;
			cnt++;
			if (min > i) min = i;
			continue;
		}
		else {
			for (int j = 2; j < i; j++) {
				p = 0;
				if (i % j == 0) { // 소수가 아닐때
					p = 1;
					break;
				}
			}
			if (p == 0) { // 소수일때
				sum += i;
				cnt++;
				if (min > i) min = i;
			}

		}
	}


	if (cnt == 0) { // 소수가 없으면
		cout << -1;
	}
	else {
		cout << sum << endl << min;
	}
}

int main() {
	int M, N, sum=0;
	cin >> M >> N;
	
	RES(M, N, sum);
}