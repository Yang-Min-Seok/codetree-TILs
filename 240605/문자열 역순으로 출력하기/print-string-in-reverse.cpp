#include <iostream>
#include <string>
using namespace std;

int main() {
    string str_list[4];
    for (int i = 0; i < 4; i++) {
        cin >> str_list[i];
    }    
    for (int i = 3; i >= 0; i--) {
        cout << str_list[i] << endl;
    }

    return 0;
}