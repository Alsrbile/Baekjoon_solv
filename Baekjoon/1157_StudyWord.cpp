#include <iostream>
#include <string>

using namespace std;
// 알파벳 대소문자로 된 단어가 주어지면, 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램
// 단, 대소문자 구분은 없다! 출력은 대문자로 출력.
// 많이 사용된 알파벳이 중복되면 ? 출력

void SelectW(string s, int* list, int len) {
    for (int i = 0; i < s.size(); i++) { // 단어의 각 알파벳 카운트
        if ((int)s[i] < int('a')) {
            list[(int)s[i] - 'A']++;
        }
        else {
            list[(int)s[i] - 'a']++;
        }
    }
    int max = 0, cnt = 0, idx = 0;
    for (int i = 0; i < len; i++) { // 최대값 판별
        if (list[i] > max) {
            max = list[i];
            idx = i;
        }
    }

    for (int i = 0; i < len; i++) { // 최대값 판별
        if (max == list[i]) cnt++;
    }

    if (cnt == 1) cout << char((int)('A') + idx);
    else if (cnt != 1) cout << '?';
}
int main() {
    string word;
    int len = 'z' - 'a' + 1;
    int list[26] = { 0, };

    cin >> word; // 단어 입력

    // 가장 많이 출력된 단어 판별 함수
    SelectW(word, list, len);
}