#include <iostream>
bool arithmetic_prog(int);
int select_num(int);
// N이 주어졌을 때, 1보다 크거나 같고 N보다 작거나 같은 한수의 개수를 출력
// 양의 정수 x의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다.
// 1,000 보다 작거나 같은 자연수 N 제시됨.
using namespace std;

bool arithmetic_prog(int input) { // 각 자리수가 등차수열인지 판별
    if (input < 10) return 1;
    if (input < 100) return 1;
    else if (input < 1000) {
        int n1 = input/100; // 100의자리
        int n2 = (input%100)/10; // 10의자리
        int n3 = input%10; //1의 자리
        if ((n2-n1) == (n3-n2)) return 1; // 만약 차가 일정하다?
        else return 0; // 등차수열 아닌 경우
    }
    if (input == 1000) return 0; // 1,000 은 등차수열 아님
}

int select_num(int n) {  // 개수 세기
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (arithmetic_prog(i) == 1) // 참이면 개수 증가
            cnt++;
    }
    
    return cnt;
}

int main() {
    int Input;

    cin >> Input; // 양의 정수 입력

    cout << select_num(Input) << endl;
}