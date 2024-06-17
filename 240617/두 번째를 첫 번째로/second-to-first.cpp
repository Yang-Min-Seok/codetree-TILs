#include <iostream>
#include <string>
using namespace std;

int main() {
    // input
    string str;
    cin >> str;

    int str_len = str.length();
    char second = str[1];
    for (int i = 0; i < str_len; i++) {
        if (str[i] == second) {
            str[i] = str[0];
        }
    }

    cout << str;

    return 0;
}