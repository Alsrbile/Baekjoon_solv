#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	queue<int> q;

	string a;
	int b;

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == "push") {
			cin >> b;
			q.push(b);
		}
		else {
			if (a == "front") {  // 가장 앞에 있는 정수를 출력
				if (q.empty() == 1) { // 큐가 비어있다면? -1 출력
					cout << -1 << '\n';
				}
				else {
					cout << q.front() << '\n';
				}
			}

			else if (a == "back") { // 큐의 가장 뒤에 있는 정수를 출력
				if (q.empty() == 1) { // 큐가 비어있다면? -1 출력
					cout << -1 << '\n';
				}
				else {
					cout << q.back() << '\n';
				}
			}

			else if (a == "pop") {
				if (q.empty() == 1) { // 큐가 비어있다면? -1 출력
					cout << -1 << '\n';
				}
				else {
					cout << q.front() << '\n';
					q.pop();
				}
			}

			else if (a == "size") { // 큐에 들어있는 정수의 개수를 출력
				cout << q.size() << '\n';
			}

			else if (a == "empty") {
				cout << q.empty() << '\n';
			}
		}
		
	}
}
