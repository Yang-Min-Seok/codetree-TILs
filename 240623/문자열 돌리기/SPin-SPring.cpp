#include <iostream>
#include <string>
using namespace std;

int main() {
    // input
    string s;
    cin >> s;

    int s_len = s.length();
    cout << s << endl;
    for (int i = 0; i < s_len; i++) {
        s = s.substr(s_len - 1, 1) + s.substr(0, s_len - 1);
        cout << s << endl;
    }

    return 0;
}