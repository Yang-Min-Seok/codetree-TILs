#include <iostream>
#include <string>
using namespace std;

int main() {
    // input
    string str, target;
    cin >> str >> target;

    if (str.find(target) != string::npos) {
        cout << str.find(target);
    } else {
        cout << -1;
    }
    
    return 0;
}