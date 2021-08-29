#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 1) {
		return 0;
	}
	else if (n < 4)
		cout << n;
	else {
		int i = 2;
		while (1) {
			if (n % i == 0) { // 나누면 0으로 되는가?
				cout << i << endl;
				n /= i; // 다음 소인수를 알기위해 나눈다.
			}
			else {
				i++;
			}

			if (n == 1) break; // 소인수분해 완료 시 탈출
		}
	}

	return 0;
}