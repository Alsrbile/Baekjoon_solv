#include <iostream>
#include <cstring>
// 알파벳 소문자로 이루어진 단어 s의 각 알파벳 개수와 위치를 알아야한다
using namespace std;

void Setting(int *arr, int n) { // 배열을 -1로 초기화하는 함수
    for (int i = 0; i < n; i++) {
        arr[i] = -1;        
    } 
}

// 문장에 알파벳이 있는지 확인
// 없음 : -1, 있음 : 단어가 처음 등장하는 위치
void Alpab_location(int *alpabet, char *sentence, int len, int len_sen) {
    for (int i = 0; i < len_sen; i++) { // 문장의 위치 확인
        int loc = (int)sentence[i] - 'a';
        if (alpabet[loc] == -1)
            alpabet[loc] = i; 
    }
}

void print_alp(int *arr, int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int n = 'z' - 'a' + 1; // 알파벳 개수 26개
    int *s = new int[n];
    
    Setting(s, n); // 일단 모든 배열 -1로 초기화
    
    // 입력으로 들어오는 문장(100을 넘지않는다.)
    char sentence[101];
    cin >> sentence;
    
    Alpab_location(s, sentence, n, strlen(sentence));

    print_alp(s, n);

    delete[] s;
}