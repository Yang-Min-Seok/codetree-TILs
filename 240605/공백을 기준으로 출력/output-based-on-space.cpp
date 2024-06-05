#include <iostream>
#include <string>
using namespace std;

int main() {
    // input
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    int str1_len = str1.length();
    int str2_len = str2.length();
    for (int i = 0; i < str1_len; i++) {
        if (str1[i] != ' '){
            cout << str1[i];
        }
    }
    for (int i = 0; i < str2_len; i++) {
        if (str2[i] != ' '){
            cout << str2[i];
        }
    }

    return 0;
}