#include <iostream>
#include <string>
using namespace std;
#define TEN 10

int main() {
    string word;
    for (int i = 1; i <= TEN; i++) {
        cin >> word;
        if (i % 2) {
            cout << word << endl;
        }
    }
    return 0;
}