#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if (c != 'z') {
        cout << (char) ((int) (c + 1));
    } else {
        cout << 'a';
    }
    return 0;
}