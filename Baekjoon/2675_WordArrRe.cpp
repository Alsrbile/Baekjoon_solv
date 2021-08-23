#include <iostream>
#include <string>
// 문자열 s입력 받고 각 문자를 R번 반복해 출력하는 프로그램
// 0~9,A~Z,(\$%*+-./:)
using namespace std;

class Test {
public:
    Test() {}
    Test(int R) : R(R) {}
    Test(string s) : s(s) {}
    Test(int R, string s) {
        this->R = R;
        this->s = s;
    }

    void print_S();
    void Set(int R, string s) {
        this->R = R;
        this->s = s;   
    }

private:
    int R;
    string s;
};

void Test::print_S() {
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < R; j++)
            cout << s[i];
    }
    cout << endl;
}

int main() {
    int testN; // 테스트 케이스의 개수
    int R;  // 반복 횟수
    string s;  // 입력 문자열
    
    cin >> testN;
    Test *t= new Test[testN]; 

    for (int i = 0; i < testN; i++) { // 반복 문자 횟수, 문자열 s 입력
        cin >> R >> s;
        t[i].Set(R, s);
    }

    for (int i = 0; i < testN; i++) { // 반복 횟수 만큼 문자 출력
        t[i].print_S();
    }

    return 0;
}