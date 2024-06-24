#include <iostream>
using namespace std;

int main() {
    char c1, c2;
    cin >> c1 >> c2;

    int int_c1 = (int) c1, int_c2 = (int) c2;
    cout << int_c1 + int_c2 << " ";

    if (int_c1 > int_c2) {
        cout << int_c1 - int_c2;
    } else {
        cout << int_c2 - int_c1;
    }
    
    return 0;
}