#include <iostream>
#include <string>
using namespace std;
#define TEN 10

int main() {
    string word_list[10];
    
    for (int i = 0; i < TEN; i++) {
        cin >> word_list[i];
    }
    for (int i = TEN - 1; i >= 0; i--) {
        cout << word_list[i] << endl;
    }

    return 0;
}