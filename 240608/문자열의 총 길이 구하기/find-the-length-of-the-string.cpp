#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    int length = 0;
    for (int i = 0; i < 10; i++) {
        cin >> s;
        length += s.length();
    }

    cout << length;

    return 0;
}