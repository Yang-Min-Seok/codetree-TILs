#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char s;
    getline(cin, str);
    cin >> s;

    int str_len = str.length(), cnt = 0;
    for (int i = 0; i < str_len; i++) {
        if (str[i] == s) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}