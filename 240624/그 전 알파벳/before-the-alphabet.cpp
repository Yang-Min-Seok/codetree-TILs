#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if (c == 'a') {
        cout << 'z';
    } else {
        cout << (char) ((int) (c - 1));
    }
    return 0;
}