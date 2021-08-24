#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = n, brk = 0;
	string* words = new string[n];

	for (int i = 0; i < n; i++) {
		cin >> words[i];
	}

// 문자를 저장후 이어가다가 다른 문자나오면 카운트 시작
	for (int i = 0; i < n; i++) {
		int len = words[i].size(); // 문자열 길이
		string word = words[i]; // 각각 단어로 나누기
		brk = 0;

		if (len > 1) { // 문자열이 1보다 길면?
			
			for (int j = 0; j < len; j++) { // 문자열 첫 번째 단어부터
				for (int k = j + 1; k < len; k++) { 
					// word[j]의 앞부터 k번째 문자 검사
					if (word[j] == word[k])
						if (word[k-1] != word[k]) {  // 근데 그룹이 아니다?
							cnt -= 1;  // 그룹단어 개수 1빼고 탈출
							brk++;
							break;
						}
				}
				if (brk == 1) break;
			}
		}
	}

	cout << cnt;
}