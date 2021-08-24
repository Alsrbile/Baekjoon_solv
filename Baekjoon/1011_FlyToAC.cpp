#include <iostream>

using namespace std;

// 이 알고리즘은 우주선이 1씩 거리가 늘면서 가다가 마지막엔 거리가 1로 착지해야하니
// 거리가 늘어난 횟수만큼 무조건 거리가 줄어든 횟수도 같아져야 함을 이용

// 1부터 증가하고 다시 1씩 감소하는 합을 구한다. >> 최대값은 한번 더하고 1부터 최대값-1 까지는 2곱함
// 그리고 (최대값+1) + (최대값) 값이 등장하면 최대값은 최대값+1.

class vas {
public:
	long long x, y;
};

int main() {
	long long n;
	cin >> n;
	
	vas* t = new vas[n];
	for (long long i = 0; i < n; i++) cin >> t[i].x >> t[i].y;
	
	for (long long i = 0; i < n; i++) {
		long long len = t[i].y - t[i].x;
		long long a = 0, cnt =0;
		
		while (1) { // a=0부터 시작 cnt도 0부터 시작 (a(n) + 2n +1)
			if ((a + 2 * cnt + 1) <= len)
				a = a + 2*cnt + 1;
			else if ((a + 2 * cnt + 1) > len) 
				break;
			cnt++;
		}

		long long lest = len - a, bigN = cnt; // 2 1

		cnt = ((cnt) * 2) - 1; // 점프 횟수

		if (lest != 0) {
			while (1) {
				if (lest - (bigN) >= 0) {
					lest -= (bigN);
					cnt++;
				}
				else if (lest - (bigN) < 0)
					bigN--;

				if (lest == 0) break;
			}
		}

		cout << cnt << endl;
	}
}