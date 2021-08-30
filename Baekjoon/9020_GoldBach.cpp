#include <iostream>

using namespace std;

// 골드바흐 추측, 10,000보다 작은 짝수는 두 소수의 합으로 나타낼 수 있음
// 

// 출력은 작은 소수부터, 파티션이 여러개면
// 두 소수 차이가 가장 작은 파티션 출력

void GoldV(int* n, int* list, int C) {
    int x, y, min;
    for (int i = 0; i < C; i++) {
        x = 0; // 골드바흐 파티션 저장할 값들
        y = 0;
        min = 0;
        for (int j = 2; j < 10001; j++) {
            if (n[i]/2 < j) break;

            if (list[j] != 0) {// 소수면? 시도

                if (n[i] - list[j] >= 0) { // n보다 소수가 클 수 있음

                    if (list[n[i] - list[j]] != 0) { // 근데 소수의 합이다??

                        if (x == 0) { // 처음 이면 그냥 넣음
                            x = list[j];
                            y = n[i] - list[j];
                            min = list[j];
                        }

                        else if (list[j] !=  min && (n[i] - list[j]) != min){ // 중복 방지
                            x = list[j];
                            y = n[i] - list[j];
                            min = list[j];
                        }
                    }

                }

                else {
                    break;
                }
            }
        }
        cout << x <<" " << y << '\n';
    }

    
}


void SelectPN(int* list) {

    for (int i = 0; i < 10001; i++) { // 초기화
        list[i] = i;
    }
    list[1] = 0;

    for (int i = 2; i < 10001; i++) {
        if (list[i] == 0) continue;
        else {
            for (int j = i + i; j < 10001; j += i) {
                list[j] = 0;
            }
        }
    }


}

int main() {
    int C;
    // 4 <= n <= 10,000
    cin >> C;

    int* n = new int[C];
    // 4 <= n <= 10,000

    for (int i = 0; i < C; i++)
        cin >> n[i];

    // 에라토스테네스 체로 미리 10,000까지 소수 리스트 구하기
    int list[10001];
    SelectPN(list); // 2부터 10,000까지 소수가 담긴 큐



    GoldV(n, list, C);
}