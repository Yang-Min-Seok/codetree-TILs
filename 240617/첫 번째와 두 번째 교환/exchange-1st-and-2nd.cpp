#include <iostream>
#include <string>
using namespace std;

int main() {
    // input
    string str;
    cin >> str;

    int str_len = str.length();
    char first = str[0], second = str[1];
    for (int i = 0; i < str_len; i++) {
        if (str[i] == first) {
            str[i] = second;
        } else if (str[i] == second) {
            str[i] = first;
        }
    }

    cout << str;

    return 0;
}