#include <iostream>
#include <string>
using namespace std;

int main() {

    // input
    string str_a, str_b;
    cin >> str_a >> str_b;

    int cnt = 0, str_a_len = str_a.length();
    for (int i = 0; i < str_a_len - 1; i++) {
        if (str_a[i] == str_b[0] && str_a[i+1] == str_b[1]) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}