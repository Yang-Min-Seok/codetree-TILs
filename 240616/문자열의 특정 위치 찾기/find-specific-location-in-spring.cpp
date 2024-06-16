#include <iostream>
#include <string>
using namespace std;

int main() {
    // input
    string str, target;
    cin >> str >> target;

    int target_idx = str.find(target);
    if (target_idx != string::npos) {
        cout << target_idx;
    } else {
        cout << "No";
    }

    return 0;
}