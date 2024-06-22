#include <iostream>
#include <string>
using namespace std;

int main() {

    // input
    string s;
    cin >> s;

    int target_idx;
    while (s.length() > 1) {
        cin >> target_idx;
        if (target_idx >= s.length()) {
            s.erase(s.length() - 1, 1);
        } else {
            s.erase(target_idx, 1);
        }
        cout << s << endl;
    }

    return 0;
}