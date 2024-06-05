#include <iostream>
#include <string>
using namespace std;

int main() {
    // fruit_list
    string fruit_list[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    // input
    char alphabet;
    cin >> alphabet;

    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        if (fruit_list[i][2] == alphabet || fruit_list[i][3] == alphabet) {
            cnt++;
            cout << fruit_list[i] << endl;
        }
    }
    cout << cnt;

    return 0;
}