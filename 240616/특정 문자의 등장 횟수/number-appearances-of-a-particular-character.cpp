#include <iostream>
#include <string>
using namespace std;

int main() {

    // input
    string str;
    cin >> str;

    int str_len = str.length(), ee_cnt = 0, eb_cnt = 0;

    for (int i = 0; i < str_len - 1; i++) {
        if (str[i] == 'e') {
            if (str[i+1] == 'e') {
                ee_cnt++;
            } else if (str[i+1] == 'b') {
                eb_cnt++;
            }
        }
    }

    cout << ee_cnt << " " << eb_cnt;

    return 0;
}