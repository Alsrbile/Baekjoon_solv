#include <iostream>

using namespace std;
// 벌집 문제
int main() {
	long long n, i = 0, a = 1;
	cin >> n; // 수 입력

	// n이 범위에 있는지 확인하자
	while (1) {
		if (n == 1) break;

		long long s = a + 6 * i; 
		if (n > a && n <= s) { // n이 범위 안에 있으면 탈출
			break;
		}
		a += (6 * i);
		i++;
	}
	cout << i+1;
}