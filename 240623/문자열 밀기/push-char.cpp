#include <iostream>
#include <string>
using namespace std;

int main() {
    // input
    string s;
    cin >> s;

    char temp = s[0];
    s = s.substr(1) + temp;

    cout << s;
    return 0;
}