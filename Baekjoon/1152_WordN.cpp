#include <iostream>
#include <string>

using namespace std;
// 영어 대소문자와 띄어쓰기로 이루어진 문자열이 주어진다.
// 단어의 개수를 출력
int selectW(string w, int *list, int n_list) {
    int len = w.size(), cnt = 0;

    if (w == " ") return 0;

    for (int i = 1; i < len-1; i++) {
        if (int(w[i]) == int(' ')) {
            if ((int(w[i-1]) != int(' ')) && ((int(w[i+1]) != int(' '))))
                cnt++;
        }
    }

    return cnt+1;
}

int main() {
    string word;
    int list[27] = { 0, };
    getline(cin, word); // 그냥 cin은 공백문자까지 입력 받는다.

    cout << selectW(word, list, 27);
}