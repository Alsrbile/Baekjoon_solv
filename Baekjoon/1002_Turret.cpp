#include <iostream>
#include <cmath>

using namespace std;

class Cir {
public:
	int x1, y1, r1;
	int x2, y2, r2;

	double Dis() {
		if (x1 <= x2) {
			if (y1 <= y2) {
				return (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
			}
			else {
				return (sqrt((x2 - x1) * (x2 - x1) + (y1 - y2) * (y1 - y2)));
			}
		}
		else if (x1 > x2) {
			if (y1 <= y2) {
				return (sqrt((x1 - x2) * (x1 - x2) + (y2 - y1) * (y2 - y1)));
			}
			else {
				return sqrt(((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
			}
		}
	}
};

int main() {
	int n;
	cin >> n;

	Cir* test = new Cir[n];

	for (int i = 0; i < n; i++) { // 초기화
		cin >> test[i].x1 >> test[i].y1 >> test[i].r1;
		cin >> test[i].x2 >> test[i].y2 >> test[i].r2;
	}

	for (int i = 0; i < n; i++) {
		if (test[i].Dis() > (double)(test[i].r1 + test[i].r2)) { // 원이 떨어져 있음
			cout << 0 << endl;
		}
		else if (test[i].Dis() == (double)(test[i].r1 + test[i].r2)) { // 닿음
			cout << 1 << endl;
		}
		else if (test[i].Dis() <= (double)(test[i].r1 + test[i].r2)) { // 겹치기 시작
			
			if (test[i].Dis() == (double)(abs(test[i].r1 - test[i].r2))) {
				if (test[i].Dis() == 0) {
					cout << -1 << endl;
				}
				else {
					cout << 1 << endl;
				}
			}
			else if (test[i].Dis() < (double)(abs(test[i].r1 - test[i].r2))) {
				cout << 0 << endl;
			}
			else
				cout << 2 << endl;
		}
	}

}