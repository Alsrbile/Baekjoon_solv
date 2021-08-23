#include <iostream>
// Self Number
int list[10000];
using namespace std;

// 셀프 넘버가 아니면 0으로 초기화
void selfNum(int* list, int n) { // 셀프 넘버 판독기
    for (int i = 0; i < n; i++) {
        if (i < 10) list[i + (i)-1] = 0;
        else if (i < 100) list[i + (i / 10) + (i % 10) - 1] = 0;
        else if (i < 1000) list[i + (i / 100) + ((i % 100) / 10) + (i % 10) - 1] = 0;
        else if (i < 10000) {
            if ((i + (i / 1000) + (i % 1000) / 100 + (i % 100) / 10 + (i % 10) - 1) < 10000)
                list[i + (i / 1000) + (i % 1000) / 100 + (i % 100) / 10 + (i % 10) - 1] = 0;
        }
        else list[n - 1] = 0; // 10,000일 경우
    }
}

void Input_list(int* list, int len) { // 1 ~ 10,000 값 대입하기
    for (int i = 0; i < len; i++) {
        list[i] = i + 1;
    }
}

void print_selfNum(int* list, int len) {
    for (int i = 0; i < len; i++) {
        if (list[i] != 0) cout << list[i] << endl;
    }
}

int main() {
    int len = (sizeof(list) / sizeof(int));

    Input_list(list, len); // 1~10,000 값 배열에 넣기

    selfNum(list, len); // 셀프 넘버가 아니면 0으로

    print_selfNum(list, len); // 셀프넘버 출력

    return 0;
}