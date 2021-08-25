#include <iostream>

using namespace std;
// H : 호텔 층수 (1부터 시작), W : 각 층의 방 수, N : 손님의 순서
// 6 12 10
class order {
public:
	int H, W, N;

};

void print_roomN(order T) {
	int floar = (T.N % T.H); // 손님의 층수 (0 ~ H-1) YY (y가 10보다 작으면 한자리 출력)
	int roomN = (T.N / T.H) + 1; // 호실 결정 XX

	if (floar == 0) floar = T.H;
	if (T.N % T.H == 0) roomN -= 1;

	if (roomN < 10)
		cout << floar << '0' << roomN << endl;
	else
		cout << floar << roomN << endl;
}

int main() {
	int test;
	cin >> test;

	order* P = new order[test];

	for (int i = 0; i < test; i++) {
		cin >> P[i].H >> P[i].W >> P[i].N;
	}

	for (int i = 0; i < test; i++) {
		print_roomN(P[i]);
	}
}