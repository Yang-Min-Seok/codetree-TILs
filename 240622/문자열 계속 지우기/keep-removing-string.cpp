#include <iostream>
#include <string>
using namespace std;

int get_target_idx(string s, string target, int s_len, int target_len) {
    for (int i = 0; i < s_len - target_len; i++) {
        bool detected = true;
        for (int j = 0; j < target_len; j++) {
            if (s[i + j] != target[j]) {
                detected = false;
            }
        }
        if (detected) {
            return i;
        }
    }
}

bool target_detected(string s, string target, int s_len, int target_len) {
    
    for (int i = 0; i < s_len - target_len; i++) {
        bool detected = true;
        for (int j = 0; j < target_len; j++) {
            if (s[i + j] != target[j]) {
                detected = false;
            }
        }
        if (detected) {
            return true;
        }
    }

    return false;
}

int main() {
    // input
    string s, target;
    cin >> s >> target;

    int s_len = s.length(), target_len = target.length();
    bool flag = true;
    int target_idx;

    while (flag) {
        if (target_detected(s, target, s_len, target_len)) {
            target_idx = get_target_idx(s, target, s_len, target_len);
            s.erase(target_idx, target_len);
        } else {
            flag = false;
        }
    }

    //print
    cout << s;
    return 0;
}