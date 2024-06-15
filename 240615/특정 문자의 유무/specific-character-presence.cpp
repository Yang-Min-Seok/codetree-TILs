#include <iostream>
#include <string>
using namespace std;

int main() {
    // input
    string str, ee, ab;
    cin >> str;
    ee = "ee";
    ab = "ab";

    if (str.find(ee) != string::npos) {
        cout << "Yes" << " ";
    } else {
        cout << "No" << " ";
    }

    if (str.find(ab) != string::npos) {
        cout << "Yes" << " ";
    } else {
        cout << "No" << " ";
    }

    return 0;
}