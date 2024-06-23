#include <iostream>
#include <string>
using namespace std;

void push_left(string &s) {
    s = s.substr(1) + s.substr(0, 1);
}

void push_right(string &s, int s_len) {
    s = s.substr(s_len - 1) + s.substr(0, s_len - 1); 
}

void reverse(string &s, int s_len) {
    int half_idx = s_len / 2;
    for (int i = 0; i < half_idx; i++) {
        char temp = s[i];
        s[i] = s[s_len - 1 - i];
        s[s_len - 1 - i] = temp;
    }
}

int main() {

    // input
    string s;
    int n;
    cin >> s >> n;

    int s_len = s.length(), order;
    for (int i = 0; i < n; i++) {
        cin >> order;
        if (order == 1) {
            push_left(s);
        } else if(order == 2) {
            push_right(s, s_len);
        } else if (order == 3) {
            reverse(s, s_len);
        }
        cout << s << endl;
    }

    return 0;
}