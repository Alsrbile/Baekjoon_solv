#include <iostream>
#include <queue>
#include <cmath>

void PrimeN(int*, int);

using namespace std;

int main() {
	int n, num;
	int list[123456*2+1];
	int size = sizeof(list) / sizeof(int);

	PrimeN(list, size);

	queue<int> test;

	while (1) {
		cin >> n;
		test.push(n);

		if (n == 0) break;
	}

	while (1) {
		num = test.front(); // 큐의 처음 뽑아내고 삭제
		if (num == 0) break;
		test.pop();

		// num+1 ~ 2*num 까지 소수 개수 구하기 (에라토스테네스 체 이용)
		// 2부터 시작해서 수의 배수들을 지워 나간다 (루트 n까지)
		int sum = 0;
		for (int i = num+1; i <= 2*num; i++) {
			sum += list[i];
		}
		cout << sum << endl;
		
	}
}

void PrimeN(int* list, int size) { // 리스트의 처음부터 끝, 소수 개수 총합구하기

	for (int i = 0; i < size; i++) { // 초기화 0~123456
		list[i] = 1;
	}
	list[1] = 0;

	for (int i = 2; i < sqrt(size-1); i++) { 
		if (list[i] == 0)
			continue;

		for (int j = i + i; j < size; j += i) {
			list[j] = 0;
		}
		
	}
	
}