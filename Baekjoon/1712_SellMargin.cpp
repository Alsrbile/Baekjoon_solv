#include <iostream>

using namespace std;
// 고정비용 A, 가변비용 B
// 물건 비용 C
// C*n = A + B*n 가 되는 n값은? n = A / (C - B)
// 손익 분기점이 없으면 -1 반환
int main() {
	long long A, B, C;

	cin >> A >> B >> C;

	if (C - B <= 0) cout << -1;
	else cout << (A / (C - B))+1;
}