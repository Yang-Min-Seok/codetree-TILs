#include <iostream>
#include <string>
using namespace std;

int get_first_e_idx(string s, int s_len) {
    
    for (int i = 0; i < s_len; i++) {
        if (s[i] == 'e') {
            return i;
        }
    }

    return 1;
}

int main() {
    // input
    string s;
    cin >> s;

    int s_len = s.length();
    int target_e_idx = get_first_e_idx(s, s_len);
    s.erase(target_e_idx, 1);

    cout << s;
    return 0;
}