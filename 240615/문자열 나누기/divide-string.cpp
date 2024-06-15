#include <iostream>
#include <string>
using namespace std;

int main() {
    // input
    int n;
    cin >> n;

    string str, new_str;
    for (int i = 0; i < n; i++) {
        cin >> new_str;
        str += new_str;
    }

    // print
    int str_len = str.length();
    for (int i = 0; i < str_len; i++) {
        if (i != 0 && i % 5 == 0) {
            cout << endl;
        }
        cout << str[i];
    }

    return 0;
}