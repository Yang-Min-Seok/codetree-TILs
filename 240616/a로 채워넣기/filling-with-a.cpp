#include <iostream>
#include <string>
using namespace std;

int main() {
    // input
    string str;
    cin >> str;

    int str_len = str.length();

    str[1] = 'a';
    str[str_len - 2] = 'a';

    cout << str;

    return 0;
}