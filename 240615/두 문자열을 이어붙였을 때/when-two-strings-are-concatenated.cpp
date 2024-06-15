#include <iostream>
#include <string>
using namespace std;

int main() {
    // input
    string str1, str2;
    cin >> str1 >> str2;

    if (str1 + str2 == str2 + str1) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}