#include <iostream>

using namespace std;

int Cnt_croA(string s) {
    int Wsize = s.size();
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'c') {
            if (s[i + 1] == '=' || s[i + 1] == '-')
                Wsize -= 1;
        }
        else if (s[i] == 'l') {
            if (s[i + 1] == 'j')
                Wsize -= 1;
        }
        else if (s[i] == 'n') {
            if (s[i + 1] == 'j')
                Wsize -= 1;
        }
        else if (s[i] == 's') {
            if (s[i + 1] == 'j')
                Wsize -= 1;
        }
        else if (s[i] == 'z') {
            if (s[i + 1] == 'j')
                Wsize -= 1;
        }
        else if (s[i] == 'z') {
            if (s[i + 1] == '=')
                if (s[i - 1] == 'd') 
                    Wsize -= 2;
                else
                    Wsize -= 1;
        }
    }

    return Wsize;
}

int main() {
    string word;
    cin >> word;

    cout << Cnt_croA(word);
}