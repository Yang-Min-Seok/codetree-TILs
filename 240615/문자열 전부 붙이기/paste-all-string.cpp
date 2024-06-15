#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str, new_str;
    for (int i = 0; i < n; i++) {
        cin >> new_str;
        str += new_str;
    }

    cout << str;
    return 0;
}