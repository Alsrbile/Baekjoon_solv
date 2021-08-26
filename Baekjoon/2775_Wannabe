#include <iostream>

using namespace std;

class kn {
public:
	int k, n;
};

int main() {
	int test;
	cin >> test;

	kn* list_kn = new kn[test];

	for (int i = 0; i < test; i++) { // 초기화
		cin >> list_kn[i].k >> list_kn[i].n;
	}

	int arr[15][14] = { 0, };

	for (int i = 0; i < 14; i++) {
		arr[0][i] = i+1;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 0; j < 14; j++) {
			if (j == 0) {
				arr[i][0] = 1;
			}
			else {
				for (int k = 0; k <= j; k++) {
					arr[i][j] += arr[i - 1][k];
				}
			}
		}
	}

	for (int i = 0; i < test; i++) {
		cout << arr[list_kn[i].k][list_kn[i].n-1] << endl;
	}
	
}
