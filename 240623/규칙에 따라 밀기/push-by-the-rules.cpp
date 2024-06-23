#include <iostream>
#include <string>
using namespace std;

void push_left(string &s) {
    s = s.substr(1) + s.substr(0, 1);
}

void push_rignt(string &s) {
    int s_len = s.length();
    s = s.substr(s_len - 1) + s.substr(0, s_len - 1);
}

int main() {
    // input
    string a, order;
    cin >> a >> order;

    int order_len = order.length();
    for (int i = 0; i < order_len; i++) {
        if (order[i] == 'L') {
            push_left(a);
        } else if (order[i] == 'R') {
            push_rignt(a);
        }
    }

    cout << a;
    return 0;
}