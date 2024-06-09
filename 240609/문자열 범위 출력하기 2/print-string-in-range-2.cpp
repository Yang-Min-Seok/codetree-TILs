#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    cin >> s;
    
    int len = s.length(), target_len;
    cin >> target_len;

    if (target_len >= len) {
        for (int i = len - 1; i >= 0; i--) {
            cout << s[i];
        }
    } else {
        for (int i = len - 1; i >= len - target_len; i--) {
            cout << s[i];
        }
    }

    return 0;
}